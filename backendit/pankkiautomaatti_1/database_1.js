const mysql = require('mysql2');
const dotenv=require('dotenv');
dotenv.config();
const connection = mysql.createPool({
  host: 'localhost',
  user: 'test_user',
  password: 'xyxy',
  database: 'pankkiautomata_ready' 
});
module.exports = connection;