var input = require('fs').readFileSync('./Index.txt', 'utf8');
var lines = input.split('\n');

let A = Number(lines.shift());
let B = Number(lines.shift());
let C = Number(lines.shift());

let salario = B * C;

console.log(`NUMBER = ${A}`);
console.log(`SALARY = U$ ${salario.toFixed(2)}`);