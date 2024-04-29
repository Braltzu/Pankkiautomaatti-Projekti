var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');
const jwt=require('jsonwebtoken');

 //voi mahdollisesti poistaa users.js ja index.js routesista, en vielä poistanut
var indexRouter = require('./routes/index'); 
var asiakasRouter = require('./routes/asiakas');
var korttiRouter = require('./routes/kortti');
var loginRouter = require('./routes/login');
var tiliRouter = require('./routes/tili');
var idasiakasRouter = require('./routes/idasiakas');
var tilitapahtumatRouter = require('./routes/tilitapahtumat');
var kortti_tiliRouter = require('./routes/kortti_tili');
 //voi mahdollisesti poistaa, en vielä poistanut

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

// voi mahdollisesti poistaa, en vielä poistanut
app.use('/', indexRouter);
app.use('/login', loginRouter);

app.use(authenticateToken);
app.use('/kortti', korttiRouter);
app.use('/idasiakas', idasiakasRouter);
app.use('/asiakas', asiakasRouter);
app.use('/tili', tiliRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);
app.use('/kortti_tili', kortti_tiliRouter);

function authenticateToken(req, res, next) {
    const authHeader = req.headers['authorization']
    const token = authHeader && authHeader.split(' ')[1]
  
    console.log("token = "+token);
    if (token == null) return res.sendStatus(401)
  
    jwt.verify(token, process.env.MY_TOKEN, function(err, user) {
  
      if (err) return res.sendStatus(403)

      req.user = user
  
      next()
    })
  }

module.exports = app;
