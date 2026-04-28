#include <stdio.h>

int main() {
    int idade;
    char nome[30]; // Criamos um "espaço" para até 29 letras + o fim da string

    // Parte 1: Idade
    printf ("digite sua idade:\n");
    scanf ("%d", idade);
    printf ("Sua idade é: %d"), idade;
    // Parte 2: Nome
    printf ("Digite seu nome\n");
    scanf ("%s", nome);
    printf ("sua idade é: %s") nome;
    return 0; // O return fica SEMPRE no final de tudo
}