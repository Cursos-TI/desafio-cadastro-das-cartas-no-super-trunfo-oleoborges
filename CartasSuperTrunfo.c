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
    super_poder1 = populacao1 + area1 + pib1 + num_pontos_turi1 + pib_per_capita1 + densidade_populacional1;
    
    // Cálculos para a Carta 2:
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + num_pontos_turi2 + pib_per_capita2 + densidade_populacional2;
    
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
    printf("-------------------- Comparação de Cartas--------------\n");

  int opcao1;
  int opcao2;
 
  printf("Menu para escolha de comparação 1\n");
  printf("1. População:\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Populacional:\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder\n");
  printf("Escolha a primiera opção para comparar entre as duas cartas: \n");
  scanf("%d", &opcao1);

  printf("Menu para escolha de comparação 2\n");
  printf("1. População:\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Populacional:\n");
  printf("6. PIB per Capita\n");
  printf("7. Super Poder\n");
  printf("Escolha a segunda opção para comparar entre as duas cartas: \n");
  scanf("%d", &opcao2);

  int valida;
    if ((opcao1>0 && opcao1<8 ))
        {
            printf("Opção 1 valida\n");
            valida = 1;
        }else{
            printf("Opção 1 invalida\n");
            valida = 0;
            }

    if ((opcao2>0 && opcao2<8 ) && (opcao2!=opcao1))
        {
            printf("Opção 2 valida\n");
            valida++;

        }else if(opcao1 == opcao2){
            printf("As opções de comparação não podem ser iguais\n");
            valida = 0;
            }else{printf("Opção 2 invalida\n");
                    valida = 0;}

    if (!(valida==2))
    {
        printf("recomece o jogo!\n");
    }else{
    

    int c1=0,c2=0; //vai salvar qual carta vai ganhar a batalha, a que for maior ganha
    printf("primeira opção de comparação :\n");
    switch (opcao1) {
        case 1://População:---------------------------
            
            if (populacao1 > populacao2)
            {   c1++;
                printf("População: carta 1 venceu\n");
            } else if(populacao1 < populacao2){
                c2++;
                printf("População: carta 2 venceu\n");
                }
                else{ printf("População: as cartas empataram\n");}
        break;

        case 2://Área---------------------------
            if (area1 > area2)
            {   c1++;
                printf("Área: carta 1 venceu \n");
            }else if (area1 < area2){ 
                c2++;
                printf("Área: carta 2 venceu \n");
                }
            else {printf("Área: as cartas empataram\n");}
        break;

        case 3://PIB---------------------------
            if (pib1 > pib2)
            {   c1++;
                printf("PIB: carta 1 venceu \n");
            }else if (pib1 < pib2){
                c2++; 
                printf("PIB: carta 2 venceu \n");
            }
            else {printf("PIB: as cartas empataram\n");}
        break;

        case 4://Pontos Turísticos---------------------------
                
            if (num_pontos_turi1 > num_pontos_turi2)
            {   c1++;
                printf("Pontos Turísticos: carta 1 venceu \n");
            }else if (num_pontos_turi1 < num_pontos_turi2){
                c2++;
                printf("Pontos Turísticos: carta 2 venceu \n");
                }
            else {printf("Pontos Turísticos: as cartas empataram\n");}
        break;

        case 5://Densidade Populacional---------------------------
            if (densidade_populacional1 < densidade_populacional2)
            {   c1++;
                printf("Densidade Populacional: carta 1 venceu \n");
            }else if (densidade_populacional1 > densidade_populacional2){
                c2++;
                printf("Densidade Populacional: carta 2 venceu \n");
                }
            else {printf("Densidade Populacional: as cartas empataram\n");}
            break;

        case 6://PIB per Capita---------------------------
            if (pib_per_capita1 > pib_per_capita2)
            {   c1++;
                printf("PIB per Capita: carta 1 venceu \n");
            }else if (pib_per_capita1 < pib_per_capita2){
                c2++;
                printf("PIB per Capita: carta 2 venceu \n");
                }
            else {printf("PIB per Capita:  as cartas empataram\n");}
        break;

        case 7://Super Poder---------------------------
            if (super_poder1 > super_poder2)
            {   c1++;
                printf("Super Poder: carta 1 venceu \n");
            }else if (super_poder1 < super_poder2){
                c2++;
                printf("Super Poder: carta 2 venceu \n");
                }
            else {printf("Super Poder:  as cartas empataram\n");}
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }
    printf("segunda opção de comparação :\n");//------------------------------------------------------------------------------------
    switch (opcao2) {
        case 1://População:---------------------------
            
            if (populacao1 > populacao2)
            {   c1++;
                printf("População: carta 1 venceu\n");
            } else if(populacao1 < populacao2){
                c2++;
                printf("População: carta 2 venceu\n");
                }
                else{ printf("População: as cartas empataram\n");}
        break;

        case 2://Área---------------------------
            if (area1 > area2)
            {   c1++;
                printf("Área: carta 1 venceu \n");
            }else if (area1 < area2){ 
                c2++;
                printf("Área: carta 2 venceu \n");
                }
            else {printf("Área: as cartas empataram\n");}
        break;

        case 3://PIB---------------------------
            if (pib1 > pib2)
            {   c1++;
                printf("PIB: carta 1 venceu \n");
            }else if (pib1 < pib2){
                c2++; 
                printf("PIB: carta 2 venceu \n");
            }
            else {printf("PIB: as cartas empataram\n");}
        break;

        case 4://Pontos Turísticos---------------------------
                
            if (num_pontos_turi1 > num_pontos_turi2)
            {   c1++;
                printf("Pontos Turísticos: carta 1 venceu \n");
            }else if (num_pontos_turi1 < num_pontos_turi2){
                c2++;
                printf("Pontos Turísticos: carta 2 venceu \n");
                }
            else {printf("Pontos Turísticos: as cartas empataram\n");}
        break;

        case 5://Densidade Populacional---------------------------
            if (densidade_populacional1 < densidade_populacional2)
            {   c1++;
                printf("Densidade Populacional: carta 1 venceu \n");
            }else if (densidade_populacional1 > densidade_populacional2){
                c2++;
                printf("Densidade Populacional: carta 2 venceu \n");
                }
            else {printf("Densidade Populacional: as cartas empataram\n");}
            break;

        case 6://PIB per Capita---------------------------
            if (pib_per_capita1 > pib_per_capita2)
            {   c1++;
                printf("PIB per Capita: carta 1 venceu \n");
            }else if (pib_per_capita1 < pib_per_capita2){
                c2++;
                printf("PIB per Capita: carta 2 venceu \n");
                }
            else {printf("PIB per Capita:  as cartas empataram\n");}
        break;

        case 7://Super Poder---------------------------
            if (super_poder1 > super_poder2)
            {   c1++;
                printf("Super Poder: carta 1 venceu \n");
            }else if (super_poder1 < super_poder2){
                c2++;
                printf("Super Poder: carta 2 venceu \n");
                }
            else {printf("Super Poder:  as cartas empataram\n");}
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    printf("--------------------RESULTADO DA BATALHA------------------------ \n");
    printf("carta 1:%d pontos\n", c1);
    printf("carta 2:%d pontos\n", c2);

    if(c1>c2){ 
        printf("--------------------CARTA 1 DE NOME: %s, VENCEU A BATALHA------------------------ \n", nome_da_cidade1);
        }else if(c1<c2){
            printf("--------------------CARTA 2 DE NOME: %s, VENCEU A BATALHA------------------------ \n", nome_da_cidade2);
        }else{
            printf("--------------------A BATALHA ficou empatada------------------------ \n");
        }
    }

  return 0;
}