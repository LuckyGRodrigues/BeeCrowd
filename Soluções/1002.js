var input = require('fs').readFileSync('./Index.txt', 'utf8');
var lines = input.split('\n');

let Pi = 3.14159;

let raio = Number(lines.shift());

let area = Pi * Math.pow(raio, 2);

console.log(`A=${area.toFixed(4)}`);
