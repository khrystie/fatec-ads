const a = 1, b = 1, c = 5, d = 6;
const e = 3, f = 3, g = 7, h = 7;

const i = Math.max(a, e); //3
const j = Math.max(b, f); //3
const k = Math.min(c, g); //5
const l = Math.min(d, h);// 6

//i >= k  -> f 
//j>= l -> f
//(5-3)*(6-3) = 6

if (i >= k || j >= l) console.log(0);
else console.log((k - i) * (l - j));




