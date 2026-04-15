#include <stdio.h>

int main() {
    int idade;
    char nome[30]; // Criamos um "espaço" para até 29 letras + o fim da string

    // Parte 1: Idade
    printf("Digite sua idade: \n");
    scanf("%d", &idade); // O & serve para dizer o "endereço" da variável na memória
    printf("Sua idade e: %d\n", idade);

    // Parte 2: Nome
    printf("Digite seu nome: \n");
    scanf("%s", nome); // Para strings (%s), não usamos o & no scanf
    printf("Seu nome e: %s\n", nome);

    return 0; // O return fica SEMPRE no final de tudo
}