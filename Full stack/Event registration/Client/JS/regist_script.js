document.getElementById('reg_button').addEventListener('click', async function() {
    const reg_name = document.getElementById('reg_name').value.trim();
    const reg_email = document.getElementById('reg_email').value.trim();
    const reg_pass = document.getElementById('reg_pass').value.trim();
    const reg_birth_date = document.getElementById('birth_data').value.trim();
    const reg_question = document.getElementById('question').value.trim();

    const reg_name_err = document.getElementById('reg_name_err');
    const reg_email_err = document.getElementById('reg_email_err');
    const reg_pass_err = document.getElementById('reg_pass_err');
    const reg_birth_err = document.getElementById('date_err');
    const reg_question_err = document.getElementById('question_err');

    reg_name_err.textContent = '';
    reg_email_err.textContent = '';
    reg_pass_err.textContent = '';
    reg_birth_err.textContent = '';
    reg_question_err.textContent = '';

    if (reg_name === '') {
        reg_name_err.textContent = 'Please enter your name';
        return;
    }

    if (reg_email === '') {
        reg_email_err.textContent = 'Please enter your email';
        return;
    }

    if (reg_pass === '') {
        reg_pass_err.textContent = 'Please enter your password';
        return;
    }

    if (reg_pass.length < 6) {
        reg_pass_err.textContent = 'Password must be at least 6 characters';
        return;
    }

    if (reg_birth_date === '') {
        reg_birth_err.textContent = 'Please enter your birth date';
        return;
    }

    if (reg_question === '') {
        reg_question_err.textContent = 'Please enter a security question';
        return;
    }

    try {
        const response = await request('/register', 'POST', { reg_name, reg_email, reg_pass, reg_birth_date, reg_question });
        localStorage.setItem('userId', response.userId);
        window.location.href = `${response.profileUrl}?userId=${response.userId}`;
    } catch (error) {
        console.error('Error sending data to server:', error);
        const errorMessage = error.message || 'An error occurred during registration. Please try again.';
        alert(errorMessage);
    }
});

document.getElementById('log_button').addEventListener('click', async function() {
    const log_email = document.getElementById('log_email').value.trim();
    const log_pass = document.getElementById('log_pass').value.trim();

    const log_email_err = document.getElementById('log_email_err');
    const log_pass_err = document.getElementById('log_pass_err');

    log_email_err.textContent = '';
    log_pass_err.textContent = '';

    if (log_email === '') {
        log_email_err.textContent = 'Please enter your email';
        return;
    }

    if (log_pass === '') {
        log_pass_err.textContent = 'Please enter your password';
        return;
    }

    try {
        const response = await request('/login', 'POST', { log_email, log_pass });
        localStorage.setItem('userId', response.userId);
        window.location.href = `${response.profileUrl}?userId=${response.userId}`;
    } catch (error) {
        console.error('Error sending data to server:', error);
        const errorMessage = error.message || 'An error occurred during login. Please try again.';
        alert(errorMessage);
    }
});

async function request(url, method = 'GET', data = null) {
    try {
        const headers = {
            'Content-Type': 'application/json'
        };
        const response = await fetch(url, {
            method,
            headers,
            body: JSON.stringify(data)
        });

        if (!response.ok) {
            throw new Error('Error ' + response.status);
        }

        return await response.json();
    } catch (error) {
        throw new Error('Error sending data to server: ' + error.message);
    }
}
