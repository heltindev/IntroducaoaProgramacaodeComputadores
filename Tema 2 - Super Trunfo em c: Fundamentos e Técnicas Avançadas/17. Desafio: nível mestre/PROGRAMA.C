#include <stdio.h>

int main() {
    // --- VARIÁVEIS DA CARTA 1 ---
    char estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1; // Requisito: unsigned long int
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // --- VARIÁVEIS DA CARTA 2 ---
    char estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // --- LEITURA DE DADOS: CARTA 1 ---
    printf("--- Cadastro Carta 1 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (Bilhões): "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    // --- LEITURA DE DADOS: CARTA 2 ---
    printf("\n--- Cadastro Carta 2 ---\n");
    printf("Estado: "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // --- CÁLCULOS (INTERMEDIÁRIO) ---
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float)populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float)populacao2;

    // --- CÁLCULO DO SUPER PODER (MESTRE) ---
    // Regra: Soma de tudo + (1 / densidade)
    // O (float) na frente das variáveis garante que a soma seja decimal
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // --- COMPARAÇÕES ---
    // Usamos operadores relacionais. O resultado é 1 (Verdadeiro) ou 0 (Falso).
    int winPop = populacao1 > populacao2;
    int winArea = area1 > area2;
    int winPib = pib1 > pib2;
    int winPontos = pontosTuristicos1 > pontosTuristicos2;
    
    // Regra especial: Densidade ganha quem tem o MENOR valor
    int winDens = densidade1 < densidade2; 
    
    int winCapita = pibPerCapita1 > pibPerCapita2;
    int winSuper = superPoder1 > superPoder2;

    // --- EXIBIÇÃO DO RESULTADO FINAL ---
    printf("\n============================\n");
    printf("  COMPARAÇÃO DE CARTAS\n");
    printf("============================\n");
    
    printf("População: Carta %d venceu (%d)\n", winPop ? 1 : 2, winPop);
    printf("Área: Carta %d venceu (%d)\n", winArea ? 1 : 2, winArea);
    printf("PIB: Carta %d venceu (%d)\n", winPib ? 1 : 2, winPib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", winPontos ? 1 : 2, winPontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", winDens ? 1 : 2, winDens);
    printf("PIB per Capita: Carta %d venceu (%d)\n", winCapita ? 1 : 2, winCapita);
    printf("Super Poder: Carta %d venceu (%d)\n", winSuper ? 1 : 2, winSuper);

    return 0;
}