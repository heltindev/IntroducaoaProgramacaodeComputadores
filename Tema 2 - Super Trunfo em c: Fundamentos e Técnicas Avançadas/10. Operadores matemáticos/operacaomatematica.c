#include <stdio.h>

    int main() {
    // 1. Criando as variáveis iniciais
    int a = 10;
    int b = 5;

    printf("--- Valores Iniciais ---\n");
    printf("a: %d, b: %d\n\n", a, b);

    // 2. Operadores Aritméticos (Cálculos simples)
    int soma = a + b;          // 10 + 5 = 15
    int subtracao = a - b;     // 10 - 5 = 5
    int multiplicacao = a * b; // 10 * 5 = 50
    int divisao = a / b;       // 10 / 5 = 2
    int resto = a % 3;         // Resto da divisão de 10 por 3 = 1

    printf("--- Resultados das Operacoes ---\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %d\n", divisao);
    printf("Resto de a por 3: %d\n\n", resto);

    // 3. Atalhos de Atualização (Atribuição)
    a += 2; // Pega o 10, soma 2 e guarda. 'a' agora é 12.
    b *= 3; // Pega o 5, multiplica por 3 e guarda. 'b' agora é 15.

    printf("--- Apos Atalhos (+= 2 e *= 3) ---\n");
    printf("Novo a: %d\n", a);
    printf("Novo b: %d\n\n", b);

    // 4. Incremento e Decremento (Passo a passo)
    a++; // Soma 1 ao 12. 'a' vira 13.
    b--; // Subtrai 1 do 15. 'b' vira 14.

    printf("--- Apos Incremento (++) e Decremento (--) ---\n");
    printf("Valor final de a: %d\n", a);
    printf("Valor final de b: %d\n", b);

    return 0;
}