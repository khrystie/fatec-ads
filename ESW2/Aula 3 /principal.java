public class principal {
    public static void main(String[] args) {

        // A variável de um tipo é chamada de objeto/instância da classe
        meuint num = new meuint();
        num.valor = 5;
        System.out.println(num.fatorial());
        System.out.println(num.ePar());
        System.out.println(num.eImpar());
    }

}
