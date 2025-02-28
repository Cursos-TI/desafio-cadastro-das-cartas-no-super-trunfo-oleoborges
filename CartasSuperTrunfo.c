#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;               
    char codigo1[4];            
    char nome_da_cidade1[30];    
    unsigned long int populacao1;            
    float area1;               
    float pib1;                
    int num_pontos_turi1;      
    float pib_per_capita1;
    float densidade_populacional1;
    float super_poder1;
    
    // Declaração das variáveis para a Carta 2
    char estado2;              
    char codigo2[4];           
    char nome_da_cidade2[30];   
    unsigned long int populacao2;           
    float area2;              
    float pib2;               
    int num_pontos_turi2;     
    float pib_per_capita2;
    float densidade_populacional2;
    float super_poder2;
    
    // Cadastro da primeira carta:
    printf("--------------------Cadastro de cartas----------------\n");

    printf("Insira o estado com uma letra: ");
    scanf(" %c", &estado1);

    printf("Insira o codigo: ");
    scanf(" %s", codigo1);

    printf("Insira o nome da cidade: ");
    scanf(" %s", nome_da_cidade1);

    printf("Insira a população: ");
    scanf(" %lu", &populacao1);

    printf("Insira a area: ");
    scanf(" %f", &area1); 

    printf("Insira o PIB: ");
    scanf(" %f", &pib1);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &num_pontos_turi1);
    
    // Cadastro da segunda carta:
    printf("--------------------Cadastro da segunda carta----------------\n");

    printf("Insira o estado com uma letra: ");
    scanf(" %c", &estado2);

    printf("Insira o codigo: ");
    scanf(" %s", codigo2);

    printf("Insira o nome da cidade: ");
    scanf(" %s", nome_da_cidade2);

    printf("Insira a população: ");
    scanf(" %lu", &populacao2);

    printf("Insira a area: ");
    scanf(" %f", &area2);

    printf("Insira o PIB: ");
    scanf(" %f", &pib2);

    printf("Insira o numero de pontos turisticos: ");
    scanf(" %d", &num_pontos_turi2);
    
    // Cálculos para a Carta 1:
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    float inv_dens1 = area1 / populacao1; // Inverso da densidade
    super_poder1 = populacao1 + area1 + pib1 + num_pontos_turi1 + pib_per_capita1 + inv_dens1;
    
    // Cálculos para a Carta 2:
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    float inv_dens2 = area2 / populacao2;// Inverso da densidade
    super_poder2 = populacao2 + area2 + pib2 + num_pontos_turi2 + pib_per_capita2 + inv_dens2;
    
    // Exibição dos dados cadastrados:
    printf("\n-------------------- Dados Cadastrados ----------------\n");
    
    printf("CARTA 1:\n");
    printf("- Estado: %c\n", estado1);
    printf("- Codigo: %s\n", codigo1);
    printf("- Nome da cidade: %s\n", nome_da_cidade1);
    printf("- População: %lu\n", populacao1);
    printf("- Área: %.2f\n", area1);
    printf("- PIB: %.2f\n", pib1);
    printf("- Pontos Turísticos: %d\n", num_pontos_turi1);
    printf("- Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("- PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("- Super Poder: %.2f\n\n", super_poder1);
    
    printf("CARTA 2:\n");
    printf("- Estado: %c\n", estado2);
    printf("- Codigo: %s\n", codigo2);
    printf("- Nome da cidade: %s\n", nome_da_cidade2);
    printf("- População: %lu\n", populacao2);
    printf("- Área: %.2f\n", area2);
    printf("- PIB: %.2f\n", pib2);
    printf("- Pontos Turísticos: %d\n", num_pontos_turi2);
    printf("- Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("- PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("- Super Poder: %.2f\n\n", super_poder2);
    
    // Exibição da Comparação de Cartas utilizando apenas expressões lógicas:
    // Para população, área, PIB, pontos turísticos, PIB per Capita e Super Poder: maior valor vence.
    // Para densidade populacional: o menor valor vence.
    printf("-------------------- Comparação de Cartas -> se 1 carta1 ganhou se 0 carta2 ganhou ---------------\n");
    
    printf("População: venceu (%d)\n", (populacao1 > populacao2));
    printf("Área: venceu (%d)\n", (area1 > area2));
    printf("PIB: venceu (%d)\n", (pib1 > pib2));
    printf("Pontos Turísticos: venceu (%d)\n", (num_pontos_turi1 > num_pontos_turi2));
    printf("Densidade Populacional: venceu (%d)\n", (densidade_populacional1 < densidade_populacional2));
    printf("PIB per Capita: venceu (%d)\n", (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: venceu (%d)\n", (super_poder1 > super_poder2));
    
    return 0;
}
