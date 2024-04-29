const db = require('../database');

const idasiakas={
    getID: function(securityNum, callback) {
        return db.query('SELECT id_asiakas FROM kortti WHERE securityNum = ?',[securityNum], callback); 
      }
}

module.exports = idasiakas;