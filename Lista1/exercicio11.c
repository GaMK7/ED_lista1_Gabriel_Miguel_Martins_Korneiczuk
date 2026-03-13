#include <stdio.h>

int main() {
    float numeros[10], soma_positivos = 0;;
    int negativos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &numeros[i]);

        if (numeros[i] < 0) {
            negativos++;
        } else {
            soma_positivos += numeros[i];

    }

    printf("\nQuantidade de negativos: %d", negativos);
    printf("\nSoma dos positivos: %.2f\n", soma_positivos);

    return 0;
}
