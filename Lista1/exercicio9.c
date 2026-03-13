#include <stdio.h>

int main() {
    int pares[6], numero, contador = 0;

    while (contador < 6) {
        printf("Digite um valor par (%d de 6): ", contador + 1);
        scanf("%d", &numero);
        
        if (numero % 2 == 0) {
            pares[contador] = numero;
            contador++;
        } else {
            printf("Valor invalido! Tente novamente.\n");
        }
    }

    printf("\nOrdem inversa: ");
    for (int i = 5; i >= 0; i--) {
        printf("%d ", pares[i]);
    }

    return 0;
}
