const db = require('../database');
const bcrypt=require('bcryptjs');

const saltRounds=10;
const kortti = {
  getAll: function(callback) {
    return db.query('select * from kortti', callback);
  },
  getById: function(id, callback) {
    return db.query('select * from kortti where id_kortti=?', [id], callback);
  },
  add: function(kortti, callback) {
    bcrypt.hash(kortti.PIN, saltRounds, function(err, hash){
    return db.query(
      'insert into kortti (id_kortti,id_asiakas,PIN,Debit,Credit,expirationDate,securityNum) values(?,?,?,?,?,?,?)',
      [kortti.id_kortti,kortti.id_asiakas, hash, kortti.Debit, kortti.Credit, kortti.expirationDate, kortti.securityNum],
      callback)
    });
  },
  delete: function(id, callback) {
    return db.query('delete from kortti where id_kortti=?', [id], callback);
  },
  update: function(id, kortti, callback) {
    bcrypt.hash(kortti.PIN, saltRounds, function(err, hash){
    return db.query(
      'update kortti set id_asiakas=?,PIN=?, Debit=?, Credit=?, expirationDate=?, securityNum=? where id_kortti=?',
      [kortti.id_asiakas, hash, kortti.Debit, kortti.Credit, kortti.expirationDate, kortti.securityNum, id],
      callback)
  });
  }
};
module.exports = kortti;