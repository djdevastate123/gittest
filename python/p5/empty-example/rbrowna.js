w = 640;
h = 480;

n = 50;
x = y = 0;
lx = [0];
ly = [0];

function getRnd(min, max)	{
	return Math.random() * (max - min) + min
}

przesuniecie = 25;

for (i = 0; i < n; i++){
	rad = Math.floor(getRnd(0, 360) * Math.PI / 180);
	x = x + Math.cos(rad) * przesuniecie;
	y = y + Math.sin(rad) * przesuniecie;
	lx[i + 1] = x;
	ly[i + 1] = y;
}
console.log(lx)

function setup(){
createCanvas(w, h);
	stroke('#666');
	background('#fff');
	line(w / 2, 0, w / 2, h); // oś y
	line(0, h / 2, w, h / 2); // oś x
}
function draw(){
	for (i = 0; i < ileKw; i++) {

}