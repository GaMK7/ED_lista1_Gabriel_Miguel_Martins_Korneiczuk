#include <stdio.h>

int main() {
    float lista1[10];
    float lista2[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%f", &lista1[i]);
        lista2[i] = lista1[i] * lista1[i];
    }

    printf("\nConjunto original:\n");
    for (int i = 0; i < 10; i++) printf("%.2f ", lista1[i]);

    printf("\nConjunto ao quadrado:\n");
    for (int i = 0; i < 10; i++) printf("%.2f ", lista2[i]);

    return 0;
}
