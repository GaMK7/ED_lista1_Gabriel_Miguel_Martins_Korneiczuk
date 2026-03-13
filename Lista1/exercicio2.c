#include <stdio.h>

int main() {
    int lista[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &lista[i]);
    }

    printf("\nValores lidos: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", lista[i]);
    }

    return 0;
}
