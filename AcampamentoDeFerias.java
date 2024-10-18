import java.util.Scanner;

class Crianca {
    String nome;
    int ficha;
    Crianca anterior;
    Crianca proximo;

    public Crianca(String nome, int ficha) {
        this.nome = nome;
        this.ficha = ficha;
    }
}

class Circulo {
    Crianca cauda;
    Crianca cabeca;

    public Circulo() {
        cabeca = null;
        cauda = null;
    }

    public boolean isEmpty() {
        return cabeca == null;
    }

    public void inserir(String nome, int ficha) {
        Crianca novaCrianca = new Crianca(nome, ficha);

        if (isEmpty()) {
            cabeca = novaCrianca;
            cauda = novaCrianca;
            cabeca.proximo = cabeca;
            cabeca.anterior = cabeca;
        } else {
            novaCrianca.anterior = cauda;
            novaCrianca.proximo = cabeca;
            cauda.proximo = novaCrianca;
            cabeca.anterior = novaCrianca;
            cauda = novaCrianca;
        }
    }

    public void remover(Crianca crianca) {
        if (isEmpty()) {
            return;
        }

        if (cabeca == crianca && cauda == crianca) {
            cabeca = null;
            cauda = null;
        } else {
            crianca.anterior.proximo = crianca.proximo;
            crianca.proximo.anterior = crianca.anterior;

            if (crianca == cabeca) {
                cabeca = crianca.proximo;
            }
            if (crianca == cauda) {
                cauda = crianca.anterior;
            }
        }
    }

    public Crianca percorrerHorario(Crianca inicio, int passos) {
        Crianca atual = inicio;
        for (int i = 0; i < passos-1; i++)
            atual = atual.anterior;

        return atual;
    }

    public Crianca percorrerAntiHorario(Crianca inicio, int passos) {
        Crianca atual = inicio;
        for (int i = 0; i < passos-1; i++) 
            atual = atual.proximo;

        return atual;
    }

    public int tamanho() {
        if (isEmpty()) {
            return 0;
        }

        int contador = 1; 
        Crianca atual = cabeca.proximo; 
        while (atual != cabeca) {
            contador++;
            atual = atual.proximo;
        }
        return contador;
    }
}

public class AcampamentoDeFerias {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            int numN = scanner.nextInt();
            if (numN == 0) {
                break;
            }

            Circulo circulo = new Circulo();
            for (int index = 0; index < numN; index++) {
                String nome = scanner.next();
                int ficha = scanner.nextInt();
                circulo.inserir(nome, ficha);
            }
            Crianca atual = circulo.cabeca;
            int ficha = circulo.cabeca.ficha;
            if (ficha % 2 != 0) 
                atual = atual.proximo;
            else
                atual = atual.anterior;
            
            while (circulo.tamanho() > 1) {
                Crianca removida;

                if (ficha % 2 != 0) 
                    removida = circulo.percorrerAntiHorario(atual, ficha);
                 else 
                    removida = circulo.percorrerHorario(atual, ficha);
        
                ficha = removida.ficha;
                if (ficha % 2 != 0) 
                    atual = removida.proximo;
                else
                    atual = removida.anterior; 
                circulo.remover(removida);
            }

            System.out.println("Vencedor(a): " + circulo.cabeca.nome);
        }

        scanner.close();
    }
}
