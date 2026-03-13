#include <stdio.h>

int main() {
    int valores[5], pos_maior = 0, pos_menor = 0;

    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        if (valores[i] > valores[pos_maior]) pos_maior = i;
        if (valores[i] < valores[pos_menor]) pos_menor = i;
    }

    printf("\nPosicao do maior: %d", pos_maior);
    printf("\nPosicao do menor: %d\n", pos_menor);

    return 0;
}
