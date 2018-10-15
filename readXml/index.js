var express = require("express");

var app = express();

var bodyparser = require('body-parser');

var fs = require("fs");

var xml2js = require('xml2js');

var parser = new xml2js.Parser();
var theinfo;

fs.readFile(__dirname + '/profile.xml', function(err, data) {
    if (err) throw err;
    console.log("data: \n" + data);
    parser.parseString(data, function(err, result) {
        if (err) throw err;
        console.log("The first name stored in the record:\n" + result.info.fname[0]);
        theinfo = result;
    });
    console.log("the info:\n" + theinfo + "\n");
    printStuff();
});

function printStuff() {
    console.log("First name :" + theinfo.info.fname[0]);
    console.log("Last name :" + theinfo.info.lname[0]);
    console.log("Social Security number :" + theinfo.info.ssn[0]);
    console.log("Age:" + theinfo.info.age[0]);
    console.log("Location :" + theinfo.info.location[0]);
}
