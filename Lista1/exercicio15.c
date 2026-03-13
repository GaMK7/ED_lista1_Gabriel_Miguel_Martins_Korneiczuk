#include <stdio.h>

int main() {
    int lista1[10], lista2[10], inter[10], k = 0, existe;

    printf("Dados do Vetor 1:\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &lista1[i]);	
    } 
    
    printf("Dados do Vetor 2:\n");
    for (int i = 0; i < 10; i++){
        scanf("%d", &lista2[i]);	
    } 

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (lista1[i] == lista2[j]) {
                existe = 0;
                for (int m = 0; m < k; m++) {
                    if (inter[m] == lista1[i]){
                        existe = 1;	
                    } 
                }
                if (!existe) {
                    inter[k] = lista1[i];
                    k++;
                }
            }
        }
    }

    printf("\nInterseccao: ");
    for (int i = 0; i < k; i++) printf("%d ", inter[i]);

    return 0;
}
