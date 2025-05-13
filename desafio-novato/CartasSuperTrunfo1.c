#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estadoCartaUm, estadoCartaDois, codigoCartaUm[3], codigoCartaDois[3], nomeCartaUm[50], nomeCartaDois[50];
    int populacaoCartaUm, populacaoCartaDois, numeroPontosTuristicosCartaUm, numeroPontosTuristicosCartaDois;
    float areaCartaUm, areaCartaDois, pibCartaUm, pibCartaDois;


    //Coleta as informações da carta 1
    printf("Bem-vindo(a)! Insira as informacoes da Carta 1:");
    printf("\nInforme o Estado: ");
    scanf(" %c",&estadoCartaUm);
    printf("Informe o Codigo: ");
    scanf("%s",codigoCartaUm);
    printf("Informe o Nome da Cidade: ");
    scanf("%s",nomeCartaUm);
    printf("Informe a Populacao: ");
    scanf("%d",&populacaoCartaUm);
    printf("Informe o Area: ");
    scanf("%f",&areaCartaUm);
    printf("Informe o PIB: ");
    scanf("%f",&pibCartaUm);
    printf("Informe o numero de Pontos Turisticos: ");
    scanf("%d",&numeroPontosTuristicosCartaUm);

    //Coleta as informações da carta 2
    printf("Agora insira as informacoes da Carta 2:");
    printf("\nInforme o Estado: ");
    scanf(" %c",&estadoCartaDois);
    printf("Informe o Codigo: ");
    scanf("%s",codigoCartaDois);
    printf("Informe o Nome da Cidade: ");
    scanf("%s",nomeCartaDois);
    printf("Informe a Populacao: ");
    scanf("%d",&populacaoCartaDois);
    printf("Informe o Area: ");
    scanf("%f",&areaCartaDois);
    printf("Informe o PIB: ");
    scanf("%f",&pibCartaDois);
    printf("Informe o numero de Pontos Turisticos: ");
    scanf("%d",&numeroPontosTuristicosCartaDois);

    //retorna as informações das cartas
    printf("Carta 1\n Estado: %c\n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %f km²\n PIB: %f bilhoes de reais\n Numero de Pontos Turisticos: %d\n", estadoCartaUm, codigoCartaUm, nomeCartaUm, populacaoCartaUm, areaCartaUm, pibCartaUm, numeroPontosTuristicosCartaUm);
    printf("Carta 2\n Estado: %c\n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %f km²\n PIB: %f bilhoes de reais\n Numero de Pontos Turisticos: %d\n", estadoCartaDois, codigoCartaDois, nomeCartaDois, populacaoCartaDois, areaCartaDois, pibCartaDois, numeroPontosTuristicosCartaDois);
    return 0;
}