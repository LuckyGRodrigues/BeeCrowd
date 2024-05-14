var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const pegarValores = (linha) => linha.split(' ').map((item) => Number(item));

let [a, b] = pegarValores(lines.shift());

if(b % a == 0 || a % b == 0){
    console.log('Sao Multiplos');
}else{
    console.log('Nao sao Multiplos');
}
