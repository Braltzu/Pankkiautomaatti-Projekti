var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

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

 //voi mahdollisesti poistaa users.js ja index.js routesista, en vielä poistanut
const asiakasRouter = require('./routes/asiakas');
const korttiRouter = require('./routes/kortti');
const tiliRouter = require('./routes/tili');
const tilitapahtumatRouter = require('./routes/tilitapahtumat');
const kortti_tiliRouter = require('./routes/kortti_tili');
var indexRouter = require('./routes/index'); //voi mahdollisesti poistaa, en vielä poistanut
var usersRouter = require('./routes/users'); //voi mahdollisesti poistaa, en vielä poistanut

var app = express();

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use('/', indexRouter); // voi mahdollisesti poistaa, en vielä poistanut
app.use('/users', usersRouter);  // voi mahdollisesti poistaa, en vielä poistanut
app.use('/asiakas', asiakasRouter);
app.use('/kortti', korttiRouter);
app.use('/tili', tiliRouter);
app.use('/tilitapahtumat', tilitapahtumatRouter);
app.use('/kortti_tili', kortti_tiliRouter);

module.exports = app;
