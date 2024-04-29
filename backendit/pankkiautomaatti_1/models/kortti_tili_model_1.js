const db = require('../database');

const kortti_tili = {
  getAll: function(callback) {
    return db.query('select * from kortti_tili', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from kortti_tili where id_kortti=?', [id], callback);
  },
  add: function(kortti_tili, callback) {
    return db.query(
      'insert into kortti_tili (id_kortti,id_tili) values(?,?)',
      [kortti_tili.id_kortti,kortti_tili.id_tili],
      callback
    );
  },
  delete: function(id, callback) {
    return db.query('delete from kortti_tili where id_kortti=?', [id], callback);
  },
  update: function(id, kortti_tili, callback) {
    return db.query(
      'update kortti_tili set id_tili=? where id_kortti=?',
      [kortti_tili.id_tili, id],
      callback
    );
  }
};
module.exports = kortti_tili;