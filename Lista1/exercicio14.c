#include <stdio.h>

int main(){
    int numeros[6], soma_pares = 0, qtd_impares = 0;

    for (int i = 0; i < 6; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nNumeros pares: ");
    for (int i = 0; i < 6; i++) {
        if (numeros[i] % 2 == 0) {
            printf("%d ", numeros[i]);
            soma_pares += numeros[i];
        }
    }
    printf("\nSoma dos pares: %d", soma_pares);

    printf("\nNumeros impares: ");
    for (int i = 0; i < 6; i++) {
        if (numeros[i] % 2 != 0) {
            printf("%d ", numeros[i]);
            qtd_impares++;
        }
    }
    printf("\nQuantidade de impares: %d\n", qtd_impares);

    return 0;
}
