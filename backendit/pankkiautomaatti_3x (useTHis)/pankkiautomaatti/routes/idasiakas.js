const express = require('express');
const router = express.Router();
const idasiakas = require('../models/idasiakas_model');

router.get('/:id',
    function (request, response) {
        idasiakas.getID(request.params.id, function (err, dbResult) {
            if (err) {
                response.json(err);
            } else {
                response.json(dbResult);
            }
        });
    });

    module.exports = router;