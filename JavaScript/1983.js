var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

const pegarValores = (linha) => linha.split(' ').map((item) => Number(item));

let teste = Number(lines.shift());
let matri = [];
let nota = [];
let aux = 0;
let x;

for (let i = 0; i < teste; i++) {
    let [auxmatri, auxnota] = pegarValores(lines.shift());
    matri[i] = auxmatri;
    nota[i] = auxnota;
}
for (let y = 0; y < teste; y++) {
    if(nota[y] >= 8 && nota[y] > aux){
        aux = nota[y];
        x = y;
    }
}

if(aux === 0){console.log('Minimum note not reached');}
else{console.log(matri[x]);}