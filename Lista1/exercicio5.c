#include <stdio.h>

int main() {
    int lista[10], pares = 0;

    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &lista[i]);
        if (lista[i] % 2 == 0) {
            pares++;
        }
    }

    printf("O vetor possui %d valores pares.\n", pares);

    return 0;
}
