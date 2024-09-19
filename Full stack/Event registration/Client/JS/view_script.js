document.addEventListener('DOMContentLoaded', async () => {
    const urlParams = new URLSearchParams(window.location.search);
    const eventId = urlParams.get('id');
    
    try {
        let data = await request(`/users?eventId=${eventId}`, 'GET'); 

        renderUsers(data);

        const sortByNameButton = document.getElementById('sortByName');
        sortByNameButton.addEventListener('click', () => {
            data.sort((a, b) => (a.full_name > b.full_name) ? 1 : -1); 
            renderUsers(data); 
        });

        const searchButton = document.getElementById('searchButton');
        searchButton.addEventListener('click', () => {
            const searchInput = document.getElementById('searchInput').value.trim().toLowerCase(); 
            const filteredData = data.filter(user => user.full_name.toLowerCase().includes(searchInput) || user.email.toLowerCase().includes(searchInput)); // Filter data by name or email
            renderUsers(filteredData); 
        });

    } catch (error) {
        console.error('Error fetching data:', error);
    }
});

function renderUsers(data) {
    const container = document.querySelector('.container');
    container.innerHTML = ''; 

    data.forEach((user) => {
        createSquare(user);
    });
}

function createSquare(user) {
    const square = document.createElement('div');
    square.classList.add('square');

    const nameElement = document.createElement('div');
    nameElement.classList.add('name');
    nameElement.textContent = user.full_name || '';
    square.appendChild(nameElement);

    const emailElement = document.createElement('div');
    emailElement.classList.add('email');
    emailElement.textContent = user.email || '';
    square.appendChild(emailElement);

    const container = document.querySelector('.container');
    container.appendChild(square);
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
