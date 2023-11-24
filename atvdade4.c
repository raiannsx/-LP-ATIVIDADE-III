#include <stdio.h>

int main() {
    int numeros[5];
    int numImpares = 0;
    int numNegativos = 0;
    int maiorNumero, menorNumero;
    int somaPares = 0;
    float mediaPares;
    float mediaTotal;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o %do numero inteiro: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 != 0) {
            numImpares++;
        }

        if (numeros[i] < 0) {
            numNegativos++;
        }

        if (i == 0) {
            maiorNumero = numeros[i];
            menorNumero = numeros[i];
        } else {
            if (numeros[i] > maiorNumero) {
                maiorNumero = numeros[i];
            }
            if (numeros[i] < menorNumero) {
                menorNumero = numeros[i];
            }
        }

        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
        }
    }

    mediaPares = numImpares > 0 ? (float)somaPares / numImpares : 0;
    mediaTotal = (float)(numeros[0] + numeros[1] + numeros[2] + numeros[3] + numeros[4]) / 5;

    printf("Quantidade de numeros impares: %d\n", numImpares);
    printf("Quantidade de numeros negativos: %d\n", numNegativos);
    printf("Maior numero: %d\n", maiorNumero);
    printf("Menor numero: %d\n", menorNumero);
    printf("Media de numeros pares: %.2f\n", mediaPares);
    printf("Media de numeros inseridos: %.2f\n", mediaTotal);

    return 0;
}

