#!/usr/bin/env node

var exec = require('child_process').exec;

var vpro = 'sudo ./vproweather -x /dev/remserial1'

exec(vpro, function callback(error, stdout, stderr){
    console.log(stdout)
    // result
});
