var input = require('fs').readFileSync('./Index.txt', 'utf8');
var lines = input.split('\n');

let A = Number(lines.shift());
let B = Number(lines.shift());

let Prod = ((A * 3.5) + (B * 7.5)) / 11;

console.log(`MEDIA = ${Prod.toFixed(5)}`)