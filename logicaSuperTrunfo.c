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
    superPoderC1 = (float)populacaoC2 + areaC2 + (pibC2*1000000000) + pontosTuristicosC2 + pibPerCapitaC2 + (1 / densidadePopulacionalC2);

    // Leitura da carta 2

    printf("------------------------------------------ \n");
    printf("Carta 2: \n Estado: %c \n", estadoC2);
    printf(" Código: %s \n Nome da Cidade: %s \n", codigoC2, cidadeC2);
    printf(" População: %lu \n Área: %.2f km² \n PIB: %.2f bilhões de reais \n", populacaoC2, areaC2, pibC2);
    printf(" Número de Pontos Turísticos: %d \n", pontosTuristicosC2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadePopulacionalC2);
    printf("PIB Per Capita: %.2f reais \n", pibPerCapitaC2);
    printf(" Super Poder: %.2f \n", superPoderC2);
    printf("------------------------------------------ \n");


    // Comparação usando if / else 
    
    printf("------------------------------------------ \n");
    printf("Comparação de cartas (Atributo: PIB per Capita) \n");
    
    if (pibPerCapitaC1 > pibPerCapitaC2){
        printf("Carta 1 - %s: %.2f. \n", cidadeC1, pibPerCapitaC1);
        printf("Carta 2 - %s: %.2f. \n", cidadeC2, pibPerCapitaC2);
        printf("Resultado: Carta 1 (%s) venceu! \n", cidadeC1);
    } else {
        printf("Carta 1 - %s: %.2f. \n", cidadeC1, pibPerCapitaC1);
        printf("Carta 2 - %s: %.2f. \n", cidadeC2, pibPerCapitaC2);
        printf("Resultado: Carta 2 (%s) venceu!", cidadeC2);
    };
    printf("------------------------------------------ \n");
    
    return 0;
}
