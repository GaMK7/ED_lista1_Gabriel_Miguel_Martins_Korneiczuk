#include <stdio.h>

int main() {
    int numeros[10], pares[10], impares[10], p = 0, im = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {
            pares[p++] = numeros[i];
        } else {
            impares[im++] = numeros[i];
        }
    }

    printf("\nArray pares: ");
    for (int i = 0; i < p; i++) printf("%d ", pares[i]);

    printf("\nArray impares: ");
    for (int i = 0; i < im; i++) printf("%d ", impares[i]);

    return 0;
}
