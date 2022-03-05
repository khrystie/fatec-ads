const retangulo1 = {
    x1:1,
    y1:1, 
    x2:5, 
    y2:5
}
const retangulo2 = {
    x1:3, 
    y1:3, 
    x2:7, 
    y2:7
}

const retanguloInterseccao = calcularRetanguloDeInterseccaoEntreRetangulos(retangulo1, retangulo2);

console.log(calcularAreaRetangulo(retanguloInterseccao));

//...

function calcularAreaRetangulo(retangulo) {
    if(retangulo.x1 >= retangulo.x2 || retangulo.y1>= retangulo.y2) console.log(0);
    return console.log((retangulo.x2-retangulo.x1)*(retangulo.y2-retangulo.y1));
}

function calcularRetanguloDeInterseccaoEntreRetangulos(retangulo1, retangulo2){
    return {      
        x1: Math.max(retangulo1.x1,retangulo2.x1),
        y1: Math.max(retangulo1.y1,retangulo2.y1), 
        x2: Math.min(retangulo1.x2,retangulo2.x2),
        y2: Math.min(retangulo1.y2,retangulo2.y2)  
    }
}