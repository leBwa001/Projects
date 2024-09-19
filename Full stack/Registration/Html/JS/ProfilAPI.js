document.addEventListener('DOMContentLoaded', async () => {
    try {
        // Отримання userId з локального сховища (LocalStorage або Cookies)
        const userId = localStorage.getItem('userId'); // Припустимо, що ви зберігаєте userId в LocalStorage
        
        // Запит на отримання даних профілю за отриманим userId
        const profileResponse = await request(`/profile?userId=${userId}`, 'GET');
        
        // Обробка отриманих даних профілю
        const profileData = profileResponse; // Припустимо, що сервер повертає дані профілю у відповіді
        
        // Збереження отриманих даних профілю для подальшого використання
        const profileNameDiv = document.getElementById('profileName');
        const profileEmailDiv = document.getElementById('profileEmail');
        
        profileNameDiv.textContent = profileData.username; // Припустимо, що в полі "name" міститься ім'я користувача
        profileEmailDiv.textContent = profileData.email; // Припустимо, що в полі "email" міститься email користувача
    } catch (error) {
        console.error('Помилка отримання даних профілю:', error);
    }
});

document.getElementById('delete_button').addEventListener('click', async function(){
    try {
        // Отримання userId з локального сховища (LocalStorage або Cookies)
        const userId = localStorage.getItem('userId'); // Припустимо, що ви зберігаєте userId в LocalStorage
        
        // Виклик функції для видалення профілю
        await request(`/delete?userId=${userId}`, 'DELETE');

        // Після успішного видалення профілю перенаправлення на головну сторінку
        window.location.href = 'http://localhost:3000/';
    } catch (error) {
        console.error('Помилка видалення профілю:', error);
    }
});

document.getElementById('exit_button').addEventListener('click', function(){
    localStorage.clear
    window.location.href='http://localhost:3000/'
})

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
            throw new Error('Помилка ' + response.status);
        }
        
        return await response.json(); 
    } catch (error) {
        throw new Error('Помилка відправки даних на сервер: ' + error.message);
    }
}


