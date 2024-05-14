var input = require('fs').readFileSync('./Index.txt', 'utf8');
var lines = input.split('\n');

const pegarValores = (linha) => linha.split(' ').map((item) => Number(item));

let [num1, num2, num3] = pegarValores(lines.shift())
let [num4, num5, num6] = pegarValores(lines.shift())

Number(num2, num3, num5, num6)

let valor = num2 * num3 + num5 * num6 

console.log(`VALOR A PAGAR: R$ ${valor.toFixed(2)}`);