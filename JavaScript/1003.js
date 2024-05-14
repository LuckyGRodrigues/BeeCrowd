var input = require('fs').readFileSync('./Index.txt', 'utf8');
var lines = input.split('\n');

let A = Number(lines.shift());
let B = Number(lines.shift());

let SOMA = A + B;

console.log(`SOMA = ${SOMA}`)