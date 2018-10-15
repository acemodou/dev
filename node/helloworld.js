var fs = require("fs");


function say() {
    fs.readFile('./files/DATA.txt', "utf8", (err, data) => {
            if (err)
                throw err;
            console.log(data);

        }

    );
};



module.exports.say = say;