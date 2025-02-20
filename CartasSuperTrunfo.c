#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Declaração das variáveis com o tipo correto (char, float ou int)
    char estado1;               // Ex: 'A'
    char codigo1[4];            // Ex: "A01" (3 caracteres + terminador '\0')
    char nome_da_cidade1[30];    // Ex: "São Paulo"
    int populacao1;            // Ex: 12325000
    float area1;               // Ex: 1521.11
    float pib1;                // Ex: 699.28 (bilhões de reais)
    int num_pontos_turi1;      // Ex: 50

    char estado2;              // Ex: 'B'
    char codigo2[4];           // Ex: "A02" (3 caracteres + terminador '\0')
    char nome_da_cidade2[30];   // Ex: "Rio de Janeiro"
    int populacao2;           // Ex: 22325000
    float area2;              // Ex: 2522.22
    float pib2;               // Ex: 699.28 (bilhões de reais)
    int num_pontos_turi2;     // Ex: 50

    // Cadastro da primeira carta:
    printf("--------------------Cadastro de cartas----------------\n");

    printf("insira o estado com uma letra: ");
    scanf(" %c", &estado1);  // Lê um único caractere

    printf("insira o codigo: ");
    scanf(" %s", codigo1);   // Lê uma string (não usa & para arrays)

    printf("insira o nome cidade: ");
    scanf(" %s", nome_da_cidade1);   // Lê uma string

    printf("insira a população: ");
    scanf(" %d", &populacao1);

    printf("insira a area: ");
    scanf(" %f", &area1); 

    printf("insira o PIB: ");
    scanf(" %f", &pib1);

    printf("insira o numero pontos turisticos: ");
    scanf(" %d", &num_pontos_turi1);

    // Cadastro da segunda carta:
    printf("--------------------vamos cadastrar a segunda carta----------------\n");

    printf("insira o estado com uma letra: ");
    scanf(" %c", &estado2);  // Lê um único caractere

    printf("insira o codigo: ");
    scanf(" %s", codigo2);

    printf("insira o nome cidade: ");
    scanf(" %s", nome_da_cidade2);

    printf("insira a população: ");
    scanf(" %d", &populacao2);

    printf("insira a area: ");
    scanf(" %f", &area2);

    printf("insira o PIB: ");
    scanf(" %f", &pib2);

    printf("insira o numero pontos turisticos: ");
    scanf(" %d", &num_pontos_turi2);

    // Exibição dos dados cadastrados:
    printf("--------------------você cadastrou essas 2 cartas abaixo----------------\n");
    
    printf("CARTA 1:\n");
    printf("- letra do estado: %c\n", estado1);
    printf("- Codigo: %s\n", codigo1);
    printf("- nome da cidade: %s\n", nome_da_cidade1);
    printf("- População: %d\n", populacao1);
    printf("- Area: %.2f\n", area1);
    printf("- PIB: %.2f\n", pib1);
    printf("- Numero pontos turisticos: %d\n", num_pontos_turi1);

    printf("CARTA 2:\n");
    printf("- letra do estado: %c\n", estado2);
    printf("- Codigo: %s\n", codigo2);
    printf("- nome da cidade: %s\n", nome_da_cidade2);
    printf("- População: %d\n", populacao2);
    printf("- Area: %.2f\n", area2);
    printf("- PIB: %.2f\n", pib2);
    printf("- Numero pontos turisticos: %d\n", num_pontos_turi2);

    return 0;
}
