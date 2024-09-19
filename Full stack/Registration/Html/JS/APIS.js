document.getElementById('reg_button').addEventListener('click', async function(){
    const reg_name = document.getElementById('reg_name').value.trim();
    const reg_email = document.getElementById('reg_email').value.trim();
    const reg_pass = document.getElementById('reg_pass').value.trim();
    
    const reg_name_err = document.getElementById('reg_name_err');
    const reg_email_err = document.getElementById('reg_email_err');
    const reg_pass_err = document.getElementById('reg_pass_err');
    
    reg_name_err.textContent = '';
    reg_email_err.textContent = '';
    reg_pass_err.textContent = '';

    if (reg_name === '') {
        reg_name_err.textContent = 'Введіть ваше ім\'я';
        return;
    }

    if (reg_email === '') {
        reg_email_err.textContent = 'Введіть вашу електронну пошту';
        return;
    }

    const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    if (!emailRegex.test(reg_email)) {
        reg_email_err.textContent = 'Введіть правильний формат електронної пошти';
        return;
    }

    if (reg_pass === '') {
        reg_pass_err.textContent = 'Введіть пароль';
        return;
    }

    if (reg_pass.length < 6) {
        reg_pass_err.textContent = 'Пароль повинен містити принаймні 6 символів';
        return;
    }

    try {
        const response = await request('/register', 'POST', {reg_name, reg_email, reg_pass});
        // Збереження userId у локальному сховищі браузера
        localStorage.setItem('userId', response.userId);
        // Перенаправлення на сторінку профілю після успішної реєстрації
        window.location.href = `${response.profileUrl}?userId=${response.userId}`;
    } catch (error) {
        console.error('Помилка відправки даних на сервер:', error);
        const errorMessage = error.message || 'Виникла помилка при реєстрації. Будь ласка, спробуйте ще раз.';
        // Виведення повідомлення про помилку з допомогою alert()
        alert(errorMessage);
    }
});

document.getElementById('log_button').addEventListener('click', async function(){
    const log_email = document.getElementById('log_email').value.trim();
    const log_pass = document.getElementById('log_pass').value.trim();
    
    const log_email_err = document.getElementById('log_email_err');
    const log_pass_err = document.getElementById('log_pass_err');
    
    log_email_err.textContent = '';
    log_pass_err.textContent = '';

    if (log_email === '') {
        log_email_err.textContent = 'Введіть вашу електронну пошту';
        return;
    }

    const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    if (!emailRegex.test(log_email)) {
        log_email_err.textContent = 'Введіть правильний формат електронної пошти';
        return;
    }

    if (log_pass === '') {
        log_pass_err.textContent = 'Введіть пароль';
        return;
    }

    try {
        const response = await request('/login', 'POST', {log_email, log_pass});
        // Збереження userId у локальному сховищі браузера
        localStorage.setItem('userId', response.userId);
        // Перенаправлення на сторінку профілю після успішної реєстрації
        window.location.href = `${response.profileUrl}?userId=${response.userId}`;
    } catch (error) {
        console.error('Помилка відправки даних на сервер:', error);
        const errorMessage = error.message || 'Виникла помилка при вході. Будь ласка, спробуйте ще раз.';
        // Виведення повідомлення про помилку з допомогою alert()
        alert(errorMessage);
    }
})

async function request (url, method='GET', data=null){
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
            throw new Error('Помилка ' + response.status);
        }
        
        return await response.json(); 
    } catch (error) {
        throw new Error('Помилка відправки даних на сервер: ' + error.message);
    }
}
