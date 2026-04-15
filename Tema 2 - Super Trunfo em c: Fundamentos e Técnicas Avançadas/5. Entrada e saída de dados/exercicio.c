#include <stdio.h>
 
int main() {
    int idade = 17;
    float altura = 1.75;
    double saldoBancario = 12345.67;
    char inicial = 'H';
    char nome[20] = "Helton";
 
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
    return 0;
}


// A seguir, você tem uma lista dos principais especificadores utilizados:

// %d: Imprime um inteiro no formato decimal.
// %i: Equivalente a %d.
 
// %f: Imprime um número de ponto flutuante no formato padrão.
// %e: Imprime um número de ponto flutuante na notação científica.
 
// %c: Imprime um único caractere.
// %s: Imprime uma cadeia (string) de caracteres.