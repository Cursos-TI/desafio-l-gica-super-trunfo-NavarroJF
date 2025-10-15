#include <stdio.h>
#include <string.h>

int main() {

    // Declaração das variaveis 
    
    char estadoC1;
    char estadoC2;
    char codigoC1[4], codigoC2[4];
    char cidadeC1[50], cidadeC2[50];
    unsigned long int populacaoC1, populacaoC2;
    float areaC1, areaC2;
    float pibC1, pibC2;
    int pontosTuristicosC1, pontosTuristicosC2;
    float densidadePopulacionalC1, densidadePopulacionalC2;
    float pibPerCapitaC1,pibPerCapitaC2;
    float superPoderC1, superPoderC2;

    // Entrada de dados primeira carta

    printf("     Cadastro da Carta 1:   \n \n");

    printf("Informe a letra do estado (Ex: A-H): \n");
    scanf(" %c", &estadoC1);

    printf("Informe o código da carta (Ex: A01): \n");
    scanf("%s", codigoC1);

    getchar(); // Consome o '\n' deixado pelo scanf

    printf("Informe o nome da cidade: \n");
    fgets(cidadeC1, 50, stdin); 
    cidadeC1[strcspn(cidadeC1, "\n")] = '\0'; // Remove o '\n'

    printf("Informe a população dessa cidade: \n");
    scanf("%lu", &populacaoC1);

    printf("Informe a área em km²: \n");
    scanf("%f", &areaC1);

    printf("Informe o PIB da cidade (em Bilhão): \n");
    scanf("%f", &pibC1);

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicosC1);  

    // Cálculos para a primeira carta
     
     densidadePopulacionalC1 = populacaoC1 / areaC1;
     pibPerCapitaC1 = (pibC1 * 1000000000) / populacaoC1;
     superPoderC1 = (float)populacaoC1 + areaC1 + (pibC1*1000000000) + pontosTuristicosC1 + pibPerCapitaC1 + (1 / densidadePopulacionalC1);


    // Leitura da carta 1
    printf("------------------------------------------ \n");
    printf("Carta 1: \n Estado: %c \n", estadoC1);
    printf(" Código: %s \n Nome da Cidade: %s \n", codigoC1, cidadeC1);
    printf(" População: %lu \n Área: %.2f km² \n PIB: %.2f bilhões de reais \n", populacaoC1, areaC1, pibC1);
    printf(" Número de Pontos Turísticos: %d \n", pontosTuristicosC1);
    printf(" Densidade Populacional: %.2f hab/km² \n", densidadePopulacionalC1);
    printf(" PIB Per Capita: %.2f reais \n", pibPerCapitaC1);
    printf(" Super Poder: %.2f \n", superPoderC1);
    printf("------------------------------------------ \n");

    
    // Entrada de dados segunda carta

    printf("     Cadastro da Carta 2:    \n \n");

    printf("Informe a letra do estado (Ex: A-H): \n");
    scanf(" %c", &estadoC2);

    printf("Informe o código da carta (Ex: A01): \n");
    scanf("%s", codigoC2);

    getchar();
    
    printf("Informe o nome da cidade: \n");
    fgets(cidadeC2, 50, stdin); 
    cidadeC2[strcspn(cidadeC2, "\n")] = '\0';

    printf("Informe a população dessa cidade: \n");
    scanf("%lu", &populacaoC2);

    printf("Informe a área em km²: \n");
    scanf("%f", &areaC2);

    printf("Informe o PIB da cidade (em Bilhão): \n");
    scanf("%f", &pibC2);

    printf("Informe a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosTuristicosC2);  

    // Cálculos para a segunda carta

    densidadePopulacionalC2 = populacaoC2 / areaC2;
    pibPerCapitaC2 = (pibC2 * 1000000000) / populacaoC2;
    superPoderC2 = (float)populacaoC2 + areaC2 + (pibC2*1000000000) + pontosTuristicosC2 + pibPerCapitaC2 + (1 / densidadePopulacionalC2);

    // Leitura da carta 2

    printf("------------------------------------------ \n");
    printf("Carta 2: \n Estado: %c \n", estadoC2);
    printf(" Código: %s \n Nome da Cidade: %s \n", codigoC2, cidadeC2);
    printf(" População: %lu \n Área: %.2f km² \n PIB: %.2f bilhões de reais \n", populacaoC2, areaC2, pibC2);
    printf(" Número de Pontos Turísticos: %d \n", pontosTuristicosC2);
    printf(" Densidade Populacional: %.2f hab/km² \n", densidadePopulacionalC2);
    printf(" PIB Per Capita: %.2f reais \n", pibPerCapitaC2);
    printf(" Super Poder: %.2f \n", superPoderC2);
    printf("------------------------------------------ \n");


    // menu interativo

    int opcao1, opcao2;
    float valor1_c1,valor1_c2, valor2_c1, valor2_c2;
    float resultado1, resultado2;

    printf("------------------------------------------ \n");
    printf("      SUPER TRUNFO - Batalha de Países      \n");
    printf("------------------------------------------ \n \n");
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área (km²)\n");
    printf("3 - PIB \n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional (hab/km²)\n");
    printf("Opção: ");
    scanf("%d", &opcao1);


    // comparação 1

    switch (opcao1)
    {
    case 1:
        printf("------------------------------------------ \n");
        printf("Comparação de cartas (Atributo: População) \n");
        valor1_c1 = populacaoC1;
        valor1_c2 = populacaoC2;
        resultado1 = populacaoC1 > populacaoC2 ? 1 : 0;    
        break;
    case 2:
        printf("------------------------------------------ \n");
        printf("Comparação de cartas (Atributo: Área) \n");
        valor1_c1 = areaC1;
        valor1_c2 = areaC2;
        resultado1 = areaC1 > areaC2 ? 1 : 0;  
        break;
    case 3:
        printf("------------------------------------------ \n");
        printf("Comparação de cartas (Atributo: PIB) \n");
        valor1_c1 = pibC1;
        valor1_c2 = pibC2;
        resultado1 = pibC1 > pibC2 ? 1 : 0;  
        break;
    case 4:
        printf("------------------------------------------ \n");
        printf("Comparação de cartas (Atributo: Número de Pontos Turísticos) \n");
        valor1_c1 = densidadePopulacionalC1;
        valor1_c2 = densidadePopulacionalC2;
        resultado1 = pontosTuristicosC1 > pontosTuristicosC2 ? 1 : 0;  
        break;
    case 5:
        printf("------------------------------------------ \n");
        printf("Comparação de cartas (Atributo: Densidade Populacional (hab/km²)) \n");
        resultado1 = densidadePopulacionalC1 < densidadePopulacionalC2 ? 1 : 0;  
        break;   
    default: 
         printf("Opção invalida");
        break;
    }


    // comparação 2

    printf("------------------------------------------ \n");
    printf("      SUPER TRUNFO - Batalha de Países \n");
    printf("------------------------------------------ \n \n");
    printf("Escolha o segundo atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área (km²)\n");
    printf("3 - PIB \n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional (hab/km²)\n");
    printf("Opção: ");
    scanf("%d", &opcao2);


    if (opcao2 == opcao1)
    {
        printf("Escolha um atributo diferente do primeiro !! \n");
    } 
    else {

        switch (opcao2)
        {
        case 1:
            printf("------------------------------------------ \n");
            printf("Comparação de cartas (Atributo: População) \n");
            valor2_c1 = populacaoC1;
            valor2_c2 = populacaoC2;
            resultado2 = populacaoC1 > populacaoC2 ? 1 : 0;    
            break;
        case 2:
            printf("------------------------------------------ \n");
            printf("Comparação de cartas (Atributo: Área) \n");
            valor2_c1 = areaC1;
            valor2_c2 = areaC2;
            resultado2 = areaC1 > areaC2 ? 1 : 0;  
            break;
        case 3:
            printf("------------------------------------------ \n");
            printf("Comparação de cartas (Atributo: PIB) \n");
            valor2_c1 = pibC1; 
            valor2_c2 = pibC2;
            resultado2 = pibC1 > pibC2 ? 1 : 0;  
            break;
        case 4:
            printf("------------------------------------------ \n");
            printf("Comparação de cartas (Atributo: Número de Pontos Turísticos) \n");
            valor2_c1 = pontosTuristicosC1;
            valor2_c2 = pontosTuristicosC2;
            resultado2 = pontosTuristicosC1 > pontosTuristicosC2 ? 1 : 0;  
            break;
        case 5:
            printf("------------------------------------------ \n");
            printf("Comparação de cartas (Atributo: Densidade Populacional (hab/km²)) \n");
            valor2_c1 = densidadePopulacionalC1;
            valor2_c2 = densidadePopulacionalC2;
            resultado2 = densidadePopulacionalC1 < densidadePopulacionalC2 ? 1 : 0;  
            break;   
        default: 
             printf("Opção invalida");
            break;
        }
    }
    

    printf("------------------------------------------ \n");
    printf("             Primeiro Atributo             \n");
    printf("%s: %.2f | %s: %.2f \n", cidadeC1, valor1_c1, cidadeC2, valor1_c2);
    printf("------------------------------------------ \n");
    printf("             Segundo Atributo              \n");
    printf("%s: %.2f | %s: %.2f \n", cidadeC1, valor2_c1, cidadeC2, valor2_c2 );
    printf("------------------------------------------ \n");

    if (resultado1 && resultado2)
    {
       printf("Parabens!! Você ganhou !!\n");
    } else if (resultado1 != resultado2) {
        printf("Você empatou !!\n");
    } else {
        printf("Infelizmente você perdeu !!\n");
    }
    



    return 0;
}
