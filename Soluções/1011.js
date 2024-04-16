var input = require('fs').readFileSync('./Index.txt', 'utf8');
var lines = input.split('\n');

Pi = 3.14159;

let raio = Number(lines.shift());

let volume = (4.0/3) * Pi * Math.pow(raio, 3); 

console.log(`VOLUME = ${volume.toFixed(3)}`);