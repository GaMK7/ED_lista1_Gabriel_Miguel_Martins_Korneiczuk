#include <stdio.h>

int main() {
    float valores[5], maior, menor, soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);
        soma += valores[i];

        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
        } else {
            if (valores[i] > maior){
            	maior = valores[i];	
		      	} 
            if (valores[i] < menor) {
            	menor = valores[i];	
			      }
        }
    }

    printf("\nValores lidos: ");
    for (int i = 0; i < 5; i++) printf("%.2f ", valores[i]);
    
    printf("\nMaior: %.2f", maior);
    printf("\nMenor: %.2f", menor);
    printf("\nMedia: %.2f\n", soma / 5);

    return 0;
}
