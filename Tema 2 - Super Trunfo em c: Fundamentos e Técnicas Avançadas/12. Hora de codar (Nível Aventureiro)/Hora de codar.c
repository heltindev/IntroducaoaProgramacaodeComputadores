// iniciar o programa
#include <stdio.h>

int main() {
// Mensagem para receber o primeiro dado e o segundo dado
    int nota1, nota2, nota3;
    float media;

// exibir a media
    printf("PROGRAMA DE CALCULO DE MEDIA\n");

    printf("Digite 7a primeira nota:\n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota:\n");
    scanf("%d", &nota2);

    printf("Digite a terceira nota:\n");
    scanf("%d", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("A media das notas e: %.1f\n", media);

    return 0;
}


// Operação de calculo da media