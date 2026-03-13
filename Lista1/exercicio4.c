#include <stdio.h>

int main() {
    int lista[8];
    int x, y, soma;

    for (int i = 0; i < 8; i++) {
        printf("Vetor[%d]: ", i);
        scanf("%d", &lista[i]);
    }

    printf("Digite a posicao X (0 a 7): ");
    scanf("%d", &x);
    printf("Digite a posicao Y (0 a 7): ");
    scanf("%d", &y);

    soma = lista[x] + lista[y];
    printf("Soma das posicoes %d e %d: %d\n", x, y, soma);

    return 0;
}
