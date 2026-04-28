#include <stdio.h>

int main() {
    // --- 1. DECLARAÇÃO DE VARIÁVEIS ---
    // Produtos (Strings)
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    // Estoque Atual (Unsigned Int - Não aceita negativos)
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    // Estoque Mínimo (Lógica das suas imagens)
    unsigned int estoqueMininoA = 500;
    unsigned int estoqueMininoB = 2500;

    // Valores Financeiros (Double para precisão decimal)
    double valorUnitarioA = 10.50;
    double valorUnitarioB = 5.25;
    
    // Variáveis para armazenar resultados
    double valorTotalA, valorTotalB;
    int resultadoA, resultadoB, comparacaoValores;

    // --- 2. CÁLCULOS ---
    valorTotalA = estoqueA * valorUnitarioA;
    valorTotalB = estoqueB * valorUnitarioB;

    // --- 3. EXIBIÇÃO DAS INFORMAÇÕES BÁSICAS ---
    printf("--- INFORMACOES DOS PRODUTOS ---\n");
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoA, estoqueA, valorUnitarioA);
    printf("Produto %s tem estoque %u e o valor unitario e R$ %.2f\n", produtoB, estoqueB, valorUnitarioB);

    // --- 4. COMPARAÇÕES DE ESTOQUE MÍNIMO ---
    // resultado = 1 (Verdadeiro) se estoque for MAIOR que o mínimo (conforme sua imagem)
    resultadoA = estoqueA > estoqueMininoA;
    resultadoB = estoqueB > estoqueMininoB;

    printf("\n--- STATUS DE SEGURANCA (1 = OK / 0 = BAIXO) ---\n");
    printf("O produto %s tem estoque minimo? %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque minimo? %d\n", produtoB, resultadoB);

    // --- 5. COMPARAÇÃO ENTRE OS VALORES TOTAIS ---
    comparacaoValores = valorTotalA > valorTotalB;

    printf("\n--- COMPARACAO FINANCEIRA ---\n");
    printf("O valor total de %s e maior que o de %s? %d\n", produtoA, produtoB, comparacaoValores);

    return 0;
}