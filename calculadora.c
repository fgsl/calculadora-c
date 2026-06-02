#include <stdio.h>

int multiplicar(int a, int b);
int dividir(int a, int b);

int main() {
    int opcao, a, b, resultado;
    char continuar;

    do {
        printf("\n=== CALCULADORA ===\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Divisao\n");
        printf("4 - Multiplicacao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%d", &a);
            printf("Digite o segundo numero: ");
            scanf("%d", &b);

            if (opcao == 1) resultado = a + b;
            else if (opcao == 2) resultado = a - b;
            else if (opcao == 3) resultado = dividir(a, b);
            else resultado = multiplicar(a, b);

            printf("Resultado: %d\n", resultado);
        } else {
            printf("Opcao indisponivel\n");
        }

        printf("Deseja executar outra operacao? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}