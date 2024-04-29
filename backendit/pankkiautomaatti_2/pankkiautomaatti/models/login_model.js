const db = require('../database');

const login={
  checkPIN: function(securityNum, callback) {
      return db.query('SELECT PIN FROM user WHERE securityNum = ?',[securityNum], callback); 
    }
};
          
module.exports = login;