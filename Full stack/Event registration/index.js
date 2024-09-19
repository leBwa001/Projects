const express = require('express')
const path = require('path')
const mysql = require('mysql')
const bodyParser = require('body-parser');
const app = express()

const conn = mysql.createConnection({
    host: '127.0.0.1',
    user: 'root',
    database: 'Events',
    password: '110404'
})

app.use(bodyParser.json())
app.use(express.static(path.resolve(__dirname, 'Client')))
app.use('/regist', express.static(path.resolve(__dirname, 'Client')));

// Connect to the database
conn.connect((err) => {
    if (err) {
        console.error('Error connecting to the database:', err);
        return;
    }
    console.log('Successfully connected to the database');
});

app.get('/api/events', (req, res) => {
    const sql = 'SELECT * FROM events'; 
    conn.query(sql, (err, results) => {
        if (err) {
            console.error('Error executing query:', err);
            res.status(500).json({ error: 'Error fetching events from the database' });
            return;
        }
        res.json(results);
    });
});

app.post('/register', (req, res) => {
    const { reg_name, reg_email, reg_pass, reg_birth_date, reg_question } = req.body;

    const checkEmailQuery = `SELECT * FROM users WHERE email = ?`
    conn.query(checkEmailQuery, [reg_email], (check_err, check_res) => {
        if (check_err) {
            return res.status(500).send('Internal server error');
        }
        if (check_res.length > 0) {
            return res.status(400).send('A user with this email already exists');
        }
        const sql = `INSERT INTO users (username, email, password, birth_date, sorce) VALUES (?, ?, ?, ?, ?)`;
        conn.query(sql, [reg_name, reg_email, reg_pass, reg_birth_date, reg_question], (error, results) => {
            if (error) {
                console.error('Database query error:', error);
                return res.status(500).send('Internal server error');
            }
            const userId = results.insertId;
            res.status(200).json({ profileUrl: '/events.html', userId });
        })
    })
});

app.post('/login', (req, res) => {
    const { log_email, log_pass } = req.body;

    const checkEmailQuery = `SELECT * FROM users WHERE email = ?`
    conn.query(checkEmailQuery, [log_email], (check_err, check_res) => {
        if (check_err) {
            return res.status(500).send('Internal server error');
        }
        if (check_res.length == 0) {
            return res.status(400).send('No user found with this email');
        }

        const user = check_res[0]
        if (user.password !== log_pass) {
            return res.status(401).send('Incorrect password');
        }
        const userId = user.id;
        res.status(200).json({ profileUrl: '/events.html', userId });
    })
});

app.get('/users', (req, res) => {
    const eventId = req.query.eventId;
    const sql = 'SELECT * FROM event_registrations WHERE event_id = ?';
    conn.query(sql, [eventId], (error, results) => {
        if (error) {
            console.error('Error fetching user data from the database:', error);
            return res.status(500).send('Internal server error');
        }
        if (results.length === 0) {
            return res.status(404).send('No users found');
        }
        res.status(200).json(results);
    });
});

app.post('/registerEvent', async (req, res) => {
    const { eventId, userId } = req.body;

    if (!eventId || !userId) {
        return res.status(400).json({ success: false, message: 'Event ID and User ID are required' });
    }

    const checkSql = 'SELECT * FROM event_registrations WHERE event_id = ? AND user_id = ?';
    conn.query(checkSql, [eventId, userId], (checkError, checkResults) => {
        if (checkError) {
            return res.status(500).json({ success: false, message: 'Internal server error' });
        }

        if (checkResults.length > 0) {
            return res.status(400).json({ success: false, message: 'User is already registered for this event' });
        }

        const getUserSql = 'SELECT username, email FROM users WHERE id = ?';
        conn.query(getUserSql, [userId], (userError, userResults) => {
            if (userError) {
                return res.status(500).json({ success: false, message: 'Internal server error' });
            }

            if (userResults.length === 0) {
                return res.status(404).json({ success: false, message: 'User not found' });
            }

            const user = userResults[0];

            const insertSql = 'INSERT INTO event_registrations (event_id, user_id, full_name, email, registration_date) VALUES (?, ?, ?, ?, NOW())';
            conn.query(insertSql, [eventId, userId, user.username, user.email], (insertError) => {
                if (insertError) {
                    return res.status(500).json({ success: false, message: 'Internal server error' });
                }

                res.status(200).json({ success: true, message: 'Successfully registered for the event' });
            });
        });
    });
});

app.get('*', (req, res) => {
    res.sendFile(path.resolve(__dirname, 'Client', 'login.html'))
})

app.listen(3000, () => console.log('Server has been started'))
