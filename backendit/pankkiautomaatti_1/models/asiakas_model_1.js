const db = require('../database');

const asiakas = {
  getAll: function(callback) {
    return db.query('select * from asiakas', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from asiakas where id_asiakas=?', [id], callback);
  },
  add: function(asiakas, callback) {
    return db.query(
      'insert into asiakas (fname,lname,address,puhnmro) values(?,?,?,?)',
      [asiakas.fname, asiakas.lname, asiakas.address, asiakas.puhnmro],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from asiakas where id_asiakas=?', [id], callback);
  },
  update: function(id, asiakas, callback) {
    return db.query(
      'update asiakas set fname=?, lname=?,address=?, puhnmro=? where id_asiakas=?',
      [asiakas.fname, asiakas.lname, asiakas.address, asiakas.puhnmro, id],
      callback
    );
  }
};
module.exports = asiakas;