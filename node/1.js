// #!/usr/bin/env node -- we can use that to make executable 

function printHelp() {
    console.log("1.js (c) Modou Jaw");
    console.log("");
    console.log("usage:");
    console.log("--help             print this help");
    console.log("--name             say hello to {Name}");
    console.log("");
}


var name = process.argv[2];

if (!name) {
    printHelp();
    process.exit(1);
}

console.log("Hello " + args);