#include <stdio.h>

int main() {
    float notas[15],soma = 0, media;

    for (int i = 0; i < 15; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }

    media = soma / 15;
    printf("\nMedia geral da turma: %.2f\n", media);

    return 0;
}
