
class meuint {

    // Os dados de um tipo são chamados de atributos.
    int valor;

    // Os procedimentos/funções de um tipo são chamados de métodos/operações.
    int fatorial() {
        int fatorial = 1;
        for (int i = 2; i <= valor; i++) {
            fatorial *= i;
        }
        return fatorial;
    }

    boolean ePar() {
        return valor % 2 == 0;
    }

    boolean eImpar() {
        return !ePar();
    }

}
