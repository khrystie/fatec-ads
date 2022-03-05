
/* plano cartesiano */
const ax1=1, ay1=1, ax2=5, ay2=6;
const bx1=3, by1=3, bx2=7, by2=7;

const maxX1 = Math.max(ax1,bx1); //3
const maxY1 = Math.max(ay1,by1); //3
const minX2 = Math.min(ax2,bx2); //5
const minY2 = Math.min(ay2,by2);// 6

if(maxX1 >= minX2 || maxY1>= minY2) console.log(0);
else console.log((minX2-maxX1)*(minY2-maxY1));

