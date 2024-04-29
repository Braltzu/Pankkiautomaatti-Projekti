const mysql = require('mysql2');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'root',
  password: 'saku',
  database: 'pankkiautomata' 
});
module.exports = connection;