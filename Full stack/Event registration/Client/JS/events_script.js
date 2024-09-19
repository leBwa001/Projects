document.addEventListener('DOMContentLoaded', async () => {
    const urlParams = new URLSearchParams(window.location.search);
    const userId = urlParams.get('userId');

    try {
        let events = await request('/api/events');

        renderEvents(events, userId);

        document.getElementById('sortByNameBtn').addEventListener('click', () => {
            events.sort((a, b) => a.name.localeCompare(b.name));
            renderEvents(events, userId);
        });

        document.getElementById('sortByDateBtn').addEventListener('click', () => {
            events.sort((a, b) => new Date(a.date) - new Date(b.date));
            renderEvents(events, userId);
        });

        document.getElementById('sortByOrganizatorBtn').addEventListener('click', () => {
            events.sort((a, b) => a.organizator.localeCompare(b.organizator));
            renderEvents(events, userId);
        });

    } catch (error) {
        console.error('Error fetching data:', error);
    }
});

function renderEvents(events, userId) {
    const container = document.querySelector('.container');
    container.innerHTML = '';

    events.forEach((event, index) => {
        createSquare(event, index + 1, userId);
    });
}

function createSquare(event, squareIndex, userId) {
    const square = document.createElement('div');
    square.classList.add('square');

    const squareTitle = document.createElement('div');
    squareTitle.classList.add('square_title');
    const titleElement = document.createElement('div');
    titleElement.classList.add('title');
    titleElement.textContent = event.name || '';
    const organizerElement = document.createElement('div');
    organizerElement.classList.add('organizator');
    organizerElement.textContent = event.organizator || '';
    squareTitle.appendChild(titleElement);
    squareTitle.appendChild(organizerElement);
    square.appendChild(squareTitle);

    const descriptionElement = document.createElement('div');
    descriptionElement.classList.add('description');
    descriptionElement.textContent = event.description || '';
    square.appendChild(descriptionElement);

    const dateElement = document.createElement('div');
    dateElement.classList.add('date');
    const eventDate = new Date(event.date);
    const formattedDate = `${eventDate.getFullYear()}-${(eventDate.getMonth() + 1).toString().padStart(2, '0')}-${eventDate.getDate().toString().padStart(2, '0')}`;
    dateElement.textContent = formattedDate;
    square.appendChild(dateElement);

    const buttons = document.createElement('div');
    buttons.classList.add('buttons');
    const registerButton = document.createElement('div');
    registerButton.classList.add('register');
    const registerLink = document.createElement('a');
    registerLink.textContent = 'Register';
    registerLink.addEventListener('click', async () => {
        try {
            await registerForEvent(event.id, userId);
            alert('Successfully registered for the event!');
        } catch (error) {
            alert('Failed to register for the event.');
            console.error('Registration error:', error);
        }
    });
    registerButton.appendChild(registerLink);
    const viewButton = document.createElement('div');
    viewButton.classList.add('view');
    const viewLink = document.createElement('a');
    viewLink.href = `/view.html?id=${event.id}`;
    viewLink.textContent = 'View';
    viewButton.appendChild(viewLink);
    buttons.appendChild(registerButton);
    buttons.appendChild(viewButton);
    square.appendChild(buttons);

    const container = document.querySelector('.container');
    container.appendChild(square);
}

async function registerForEvent(eventId, userId) {
    try {
        const response = await fetch('/registerEvent', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify({ eventId, userId })
        });

        if (!response.ok) {
            throw new Error('Failed to register');
        }

        const result = await response.json();
        if (result.success) {
            return result;
        } else {
            throw new Error(result.message || 'Failed to register');
        }
    } catch (error) {
        throw new Error('Error registering for the event: ' + error.message);
    }
}

async function request(url, method = 'GET', data = null) {
    try {
        const headers = {
            'Content-Type': 'application/json'
        };

        const requestOptions = {
            method,
            headers
        };

        if (data) {
            requestOptions.body = JSON.stringify(data);
        }

        const response = await fetch(url, requestOptions);
        
        if (!response.ok) {
            throw new Error('Error ' + response.status);
        }
        
        return await response.json(); 
    } catch (error) {
        throw new Error('Error sending data to the server: ' + error.message);
    }
}
