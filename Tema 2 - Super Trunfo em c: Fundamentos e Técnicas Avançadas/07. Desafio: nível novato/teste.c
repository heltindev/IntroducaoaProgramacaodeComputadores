#include <stdio.h>

int main() {
    
    // --- VARIÁVEIS PARA TESTE DE ENTRADA DE DADOS ---
    char nome[20];

    // --- TESTE DE ENTRADA DE DADOS ---
    printf ("QUAL É SEU NOME?:\n");
    scanf ("%s", nome);
    printf ("Seu nome é: %s\n", nome);
    
    return 0;
}