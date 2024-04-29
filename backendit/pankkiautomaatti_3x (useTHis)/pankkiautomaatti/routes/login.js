require('dotenv').config();  // This should be at the very top
const dotenvResult = require('dotenv').config();
if (dotenvResult.error) {
    throw dotenvResult.error;
}
const express = require('express');
const router = express.Router();
const bcrypt = require('bcryptjs');
const login = require('../models/login_model');
const jwt = require('jsonwebtoken');

router.post('/', 
  function(request, response) {
    if(request.body.securityNum && request.body.PIN){
      const secnum = request.body.securityNum;
      const pinnum = request.body.PIN;
      console.log("Received PIN:", pinnum);
        login.checkPIN(secnum, function(dbError, dbResult) {
          if(dbError){
            response.json(dbError);
          }
          else{
            if (dbResult.length > 0) {
               console.log("Fetched PIN hash from database:", dbResult[0].PIN);
              bcrypt.compare(pinnum,dbResult[0].PIN, function(err,compareResult) {
                if (err) {
                  console.log("Error comparing PIN:", err);
                  response.status(500).send("Error processing PIN");
                  return;
                }
                if(compareResult) {
                  console.log("success");
                  const token = generateAccessToken({ securityNum: secnum });
                  response.send(token);
                }
                else {
                    console.log("wrong PIN");
                    response.send(false);
                }			
              }
              );
            }
            else{
              console.log("user does not exists");
              response.send(false);
            }
          }
          }
        );
      }
    else{
      console.log("securityNum or PIN missing");
      response.send(false);
    }
  }
);
//dotenv.config();

function generateAccessToken(securityNum) {
  if (!process.env.MY_TOKEN) {
      throw new Error("Environment variable MY_TOKEN is not set.");
  }
  return jwt.sign(securityNum, process.env.MY_TOKEN, { expiresIn: '1800s' });
}

module.exports=router;