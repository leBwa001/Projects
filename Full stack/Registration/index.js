const express = require('express')
const path = require('path')
const mysql = require('mysql')
const bodyParser = require('body-parser');
const app = express()

const conn = mysql.createConnection({
    host:'127.0.0.1',
    user:'root',
    database:'Registration',
    password:'110404'
})

conn.connect()

app.use(bodyParser.json())
app.use(express.static(path.resolve(__dirname, 'Html')))
app.use('/registration', express.static(path.resolve(__dirname, 'Html')));


app.post('/register', (req, res) => {
    const { reg_name, reg_email, reg_pass } = req.body;

    const ChekEmailQuery= `SELECT * FROM users WHERE email = ?`
    conn.query(ChekEmailQuery, [reg_email], (chek_err, chek_res)=>{
        if (chek_err) {
            return res.status(500).send('Внутрішня помилка сервера')
        }
        if (chek_res.length>0) {
            return res.status(400).send('Користувач з таким email вже існує');
        }
        const sql = `INSERT INTO users (username, email, password) VALUES (?, ?, ?)`;
        conn.query(sql, [reg_name, reg_email, reg_pass], (error, results) => {
            if (error) {
                console.error('Помилка запиту до бази даних:', error);
                return res.status(500).send('Внутрішня помилка сервера');
            }
            // Отримуємо ID новоствореного користувача
            userId = results.insertId;
            // Повертаємо URL сторінки профілю разом з userId як частину відповіді сервера
            res.status(200).json({ profileUrl: '/profile.html', userId });
        })
    })
});

app.post('/login', (req, res) => {
    const {log_email, log_pass } = req.body;

    const ChekEmailQuery= `SELECT * FROM users WHERE email = ?`
    conn.query(ChekEmailQuery, [log_email], (chek_err, chek_res)=>{
        if (chek_err) {
            return res.status(500).send('Внутрішня помилка сервера')
        }
        if (chek_res.length==0) {
            return res.status(400).send('Користувач з таким email не знайдено');
        }

        const user=chek_res[0]
        if(user.password!==log_pass)
        {
            return res.status(401).send('Неправильний пароль');
        }
        // Отримуємо ID новоствореного користувача
        userId = user.id;
        // Повертаємо URL сторінки профілю разом з userId як частину відповіді сервера
        res.status(200).json({ profileUrl: '/profile.html', userId });
    })
});

app.get('/profile', (req, res) => {
    userId = req.query.userId;
    // Отримання даних профілю за userId з бази даних
    const sql = 'SELECT * FROM users WHERE id = ?';
    conn.query(sql, [userId], (error, results) => {
        if (error) {
            console.error('Помилка отримання даних профілю з бази даних:', error);
            return res.status(500).send('Внутрішня помилка сервера');
        }
        if (results.length === 0) {
            return res.status(404).send('Профіль не знайдено');
        }
        const profileData = results[0]; // Припустимо, що дані профілю знаходяться у першому рядку результату запиту
        res.status(200).json(profileData);
    });
});

app.delete('/delete', (req, res) => {
    const userId = req.query.userId;
    
    const sql = 'DELETE FROM users WHERE id = ?';
    conn.query(sql, [userId], (error, results) => {
        if (error) {
            console.error('Помилка видалення профілю з бази даних:', error);
            return res.status(500).send('Внутрішня помилка сервера');
        }
        
        res.status(200).json({ message: 'Профіль успішно видалено' });
    });
});




app.get('*', (req, res)=>{
    res.sendFile(path.resolve(__dirname, 'Html', 'registration.html'))
})

app.listen(3000, ()=>console.log('Servev has been started'))