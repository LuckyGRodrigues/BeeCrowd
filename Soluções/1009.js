var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let A = lines.shift();
let B = Number(lines.shift());
let C = Number(lines.shift());

let comissao = C * 0.15;
let salario = B + comissao; 

console.log(`TOTAL = R$ ${salario.toFixed(2)}`);