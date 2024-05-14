var input = require('fs').readFileSync('./Index.txt', 'utf8');
var lines = input.split('\n');

let A = Number(lines.shift());
let B = Number(lines.shift());
let C = Number(lines.shift());
let D = Number(lines.shift());

let Prod = (A * B - C * D);

console.log(`DIFERENCA = ${Prod}`)