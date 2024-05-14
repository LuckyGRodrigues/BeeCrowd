var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let aux = Number(lines.shift());

for (let i = 0; i < aux ; i++) {
    let teste = Number(lines.shift());
    if(teste % 2 == 0){
        console.log(0);
    }
    else{
        console.log(1);
    }
}