var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let a1 = Number(lines.shift());
let a2 = Number(lines.shift());
let a3 = Number(lines.shift());

let t1 = (a3 * 4) + (a2 * 2);
let t2 = (a1 * 2) + (a3 * 2);
let t3 = (a1 * 4) + (a2 * 2);

if (t1 < t2 && t1 < t3) {
  console.log(t1);
}else if(t2 < t1 && t2 < t3){
  console.log(t2);
}else if(t3 < t1 && t3 < t2){
  console.log(t3);
}else{
  console.log(t2);
}