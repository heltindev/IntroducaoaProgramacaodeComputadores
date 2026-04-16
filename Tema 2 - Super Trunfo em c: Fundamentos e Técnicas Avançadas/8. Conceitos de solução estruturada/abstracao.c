#include <stdio.h>

// 1. Variáveis Globais (para facilitar o acesso das funções neste nível inicial)
float nota1, nota2;
float resultadoMedia;

// Função para entrada de dados
void entradaDados() {
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
}

// Função para cálculo (ela RETORNA um valor float)
float calcularMedia() {
    return (nota1 + nota2) / 2;
}

// Função para exibir (ela RECEBE um valor como parâmetro)
void exibirMedia(float m) {
    printf("A media calculada e: %.2f\n", m);
}

int main() {
    // Declaramos a variável local para guardar o que a função calcular retornar
    float media; 

    entradaDados();
    
    // A variável 'media' recebe o valor que sai de 'calcularMedia()'
    media = calcularMedia();
    
    // Passamos o valor de 'media' para dentro da função de exibição
    exibirMedia(media);

    return 0;
}