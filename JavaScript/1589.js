var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const pegarValores = (linha) => linha.split(' ').map((item) => Number(item));
let teste = Number(lines.shift());


for (let i = 0; i < teste; i++) {
    let [a, b] = pegarValores(lines.shift());
    console.log(a+b);        
}