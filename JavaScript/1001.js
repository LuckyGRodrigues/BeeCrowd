var input = require('fs').readFileSync('./Index.txt', 'utf8');
var lines = input.split('\n');

let num1 = Number(lines.shift());
let num2 = Number(lines.shift());

let X = num1 + num2;

console.log(`X = ${X}`)