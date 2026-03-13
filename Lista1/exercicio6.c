#include <stdio.h>

int main() {
    int lista[10], maior, menor;

    for (int i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &lista[i]);

        if (i == 0) {
            maior = lista[i];
            menor = lista[i];
        } else {
            if (lista[i] > maior){
            	maior = lista[i];
			} if (lista[i] < menor) {
				menor = lista[i];	
			}
        }
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}
