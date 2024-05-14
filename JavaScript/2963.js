var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let teste = Number(lines.shift());
let carlos = Number(lines.shift());
let escolhido = 'S';

for (let i = 0; i < teste; i++) {
    let bobo = Number(lines.shift());
    if(bobo > carlos){
        escolhido = 'N'
    }
}
console.log(escolhido);