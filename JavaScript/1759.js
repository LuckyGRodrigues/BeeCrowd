var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let teste = Number(lines.shift());
let vetor = [];

for (let i = 0; i < teste; i++){
    vetor.push('Ho');
}
let final = vetor.join(' ');

console.log(`${final}!`);