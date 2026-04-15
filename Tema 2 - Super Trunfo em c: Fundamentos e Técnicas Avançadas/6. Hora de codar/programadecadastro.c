#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome [50];

    printf ("digite sua idade:\n");
    scanf ("%d", &idade);
    
    printf ("digite sua altura:\n");
    scanf ("%f", &altura);

    printf ("digite sua nome:\n");
    scanf ("%s", &nome);

    printf ("digite sua matricula:\n");
    scanf ("%d", &matricula);

    printf ("nome do aluno: %s - Matrícula: %d\n", nome, matricula);
    printf ("idade: %d - altura %f\n", idade, altura);
    
    return 0;
}