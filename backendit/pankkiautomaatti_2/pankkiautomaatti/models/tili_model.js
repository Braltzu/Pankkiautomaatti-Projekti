const db = require('../database');

const tili = {
  getAll: function(callback) {
    return db.query('select * from tili', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from tili where id_tili=?', [id], callback);
  },
  add: function(tili, callback) {
    
    return db.query(
      'insert into tili (id_asiakas,debitsaldo,credit_saldo,creditTilinumero,debitTilinumero,creditLuottoraja) values(?,?,?,?,?,?)',
      [tili.id_asiakas, tili.debitsaldo, tili.credit_saldo, tili.creditTilinumero, tili.debitTilinumero, tili.creditLuottoraja],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from tili where id_tili=?', [id], callback);
  },
  update: function(id, tili, callback) {
    return db.query(
      'update tili set id_asiakas=?,debitsaldo=?, credit_saldo=?, creditTilinumero=?, debitTilinumero=?, creditLuottoraja=? where id_tili=?',
      [tili.id_asiakas, tili.debitsaldo, tili.credit_saldo,tili.creditTilinumero, tili.debitTilinumero, tili.creditLuottoraja, id],
      callback
    );
  }
};
module.exports = tili;