#include <stdio.h>

void imprimeDados(int numeroDaCarta, char estadoCarta, char codigoCarta[3], char nomeCarta[50], int populacaoCarta, float areaCarta, float pibCarta, int numeroPontosTuristicosCarta, float densidadePopulacionalCarta, float pibPerCapitaCarta) {
    //retorna as informações das cartas
    printf("\nCarta %d\n Estado: %c\n Codigo: %s\n Nome da Cidade: %s\n Populacao: %d\n Area: %.2f km²\n PIB: %.2f bilhoes de reais\n Numero de Pontos Turisticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", numeroDaCarta,estadoCarta, codigoCarta, nomeCarta, populacaoCarta, areaCarta, pibCarta, numeroPontosTuristicosCarta, densidadePopulacionalCarta, pibPerCapitaCarta);   
    return;
}

void coletaDados() {

    char estadoCartaUm, estadoCartaDois, codigoCartaUm[3], codigoCartaDois[3], nomeCartaUm[50], nomeCartaDois[50];
    int populacaoCartaUm, populacaoCartaDois, numeroPontosTuristicosCartaUm, numeroPontosTuristicosCartaDois;
    float areaCartaUm, areaCartaDois, pibCartaUm, pibCartaDois, densidadePopulacionalCartaUm, densidadePopulacionalCartaDois, pibPerCapitaCartaUm, pibPerCapitaCartaDois;


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
    printf("Informe a Area: ");
    scanf("%f",&areaCartaUm);
    printf("Informe o PIB: ");
    scanf("%f",&pibCartaUm);
    printf("Informe o numero de Pontos Turisticos: ");
    scanf("%d",&numeroPontosTuristicosCartaUm);

    //Coleta as informações da carta 2
    printf("\nAgora insira as informacoes da Carta 2:");
    printf("\nInforme o Estado: ");
    scanf(" %c",&estadoCartaDois);
    printf("Informe o Codigo: ");
    scanf("%s",codigoCartaDois);
    printf("Informe o Nome da Cidade: ");
    scanf("%s",nomeCartaDois);
    printf("Informe a Populacao: ");
    scanf("%d",&populacaoCartaDois);
    printf("Informe a Area: ");
    scanf("%f",&areaCartaDois);
    printf("Informe o PIB: ");
    scanf("%f",&pibCartaDois);
    printf("Informe o numero de Pontos Turisticos: ");
    scanf("%d",&numeroPontosTuristicosCartaDois);

    //Calcula densidade populacional e pib per Capita

    densidadePopulacionalCartaUm = populacaoCartaUm/ areaCartaUm;
    densidadePopulacionalCartaDois = populacaoCartaDois / areaCartaDois;
    pibPerCapitaCartaUm = (pibCartaUm * 1000000000) / populacaoCartaUm;
    pibPerCapitaCartaDois = (pibCartaDois * 1000000000) / populacaoCartaDois;

    imprimeDados(1, estadoCartaUm, codigoCartaUm, nomeCartaUm, populacaoCartaUm, areaCartaUm, pibCartaUm, numeroPontosTuristicosCartaUm, densidadePopulacionalCartaUm, pibPerCapitaCartaUm);
    imprimeDados(2, estadoCartaDois, codigoCartaDois, nomeCartaDois, populacaoCartaDois, areaCartaDois, pibCartaDois, numeroPontosTuristicosCartaDois, densidadePopulacionalCartaDois, pibPerCapitaCartaDois);
}

int main() {
    coletaDados();
return 0;
}