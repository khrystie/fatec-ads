const retanguloEnvolventePersonagem1 = {
    x1: 1,
    y1: 1,
    x2: 5,
    y2: 5
}
const retanguloEnvolventePersonagem2 = {
    x1: 3,
    y1: 3,
    x2: 7,
    y2: 7
}

console.log(houveColisao(retanguloEnvolventePersonagem1, retanguloEnvolventePersonagem2));

//...

function houveColisao(retanguloEnvolventePersonagem1, retanguloEnvolventePersonagem2) {
    return calcularAreaRetangulo(calcularRetanguloDeInterseccaoEntre(retanguloEnvolventePersonagem1, retanguloEnvolventePersonagem2)) > 0;
}

function calcularAreaRetangulo(retangulo) {
    if (retangulo.x1 >= retangulo.x2 || retangulo.y1 >= retangulo.y2) return 0;
    return (retangulo.x2 - retangulo.x1) * (retangulo.y2 - retangulo.y1);
}

function calcularRetanguloDeInterseccaoEntre(retanguloEnvolventePersonagem1, retanguloEnvolventePersonagem2) {
    return {
        x1: Math.max(retanguloEnvolventePersonagem1.x1, retanguloEnvolventePersonagem2.x1),
        y1: Math.max(retanguloEnvolventePersonagem1.y1, retanguloEnvolventePersonagem2.y1),
        x2: Math.min(retanguloEnvolventePersonagem1.x2, retanguloEnvolventePersonagem2.x2),
        y2: Math.min(retanguloEnvolventePersonagem1.y2, retanguloEnvolventePersonagem2.y2)
    }
}

