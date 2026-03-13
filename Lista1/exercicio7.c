#include <stdio.h>

int main() {
    int numeros[10], maior, posicao = 0;

    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
            posicao = i;
        }
    }

    printf("\nVetor: ");
    for (int i = 0; i < 10; i++) printf("%d ", numeros[i]);
    printf("\nMaior elemento: %d, na posicao: %d\n", maior, posicao);

    return 0;
}
