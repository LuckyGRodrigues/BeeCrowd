var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

while(true){
  let x = lines.shift();
  let vetor = [];
  if (x != 0){
    for (let i = 0; i < x; i++){
      vetor[i] = String(i + 1);
    }
  } else {
    break;
  }
  console.log(vetor.join(' '));
}