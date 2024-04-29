const db = require('../database');

const tilitapahtumat = {
  getAll: function(callback) {
    return db.query('select * from tilitapahtumat', callback);
  },
  getById: function(id_asiakas, callback) {
    return db.query('select * from tilitapahtumat where id_asiakas=?', [id_asiakas], callback);
  },
  add: function(tilitapahtumat, callback) {
    return db.query(
      'insert into tilitapahtumat (id_asiakas,amout,DATE) values(?,?,?)',
      [tilitapahtumat.id_asiakas, tilitapahtumat.amout, tilitapahtumat.DATE],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tilitapahtumat where id_tilitapahtumat=?', [id], callback);
  },
  update: function(id, tilitapahtumat, callback) {
    return db.query(
      'update tilitapahtumat set id_asiakas=?,amout=?, DATE=? where id_tilitapahtumat=?',
      [tilitapahtumat.id_asiakas, tilitapahtumat.amout, tilitapahtumat.DATE, id],
      callback
    );
  }
};
module.exports = tilitapahtumat;