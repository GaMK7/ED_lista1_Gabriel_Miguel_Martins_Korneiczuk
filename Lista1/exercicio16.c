#include <stdio.h>

int main() {
    int lista1[10], lista2[10], lista3[10];
    int k = 0, repetido;

    printf("Vetor 1:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &lista1[i]);
    }

    printf("Vetor 2:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &lista2[i]);
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(lista1[i] == lista2[j]){

                repetido = 0;
                for(int x = 0; x < k; x++){
                    if(lista3[x] == lista1[i]){
                        repetido = 1;
                        break;
                    }
                }

                if(!repetido){
                    lista3[k] = lista1[i];
                    k++;
                }
            }
        }
    }

    printf("\nInterseccao dos vetores:\n");
    for(int i = 0; i < k; i++){
        printf("%d ", lista3[i]);
    }

    return 0;
}
