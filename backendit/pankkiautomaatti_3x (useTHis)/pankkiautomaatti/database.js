const mysql = require('mysql2');
const dotenv=require('dotenv');
dotenv.config();
const connection = mysql.createPool({
  host: 'localhost',
  user: 'ylijumal',
  password: 'saku',
  database: 'pankkiautomata' 
});
module.exports = connection;