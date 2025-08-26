#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"

int main (){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que será utilizada a localizaçãopadrãso do sistema operacional
	
	//atributos carta 1
	char pais1[10] = "Brasil";
	char codigoCarta1[3] = " - 01";
	char nomeDaCapital1[20] = "Fortaleza";
	int populacao1 = 1000;
	float area1 = 11;
	float pib1 = 5;
	int pontosTuristicos1 = 15;
	float densidadePop1 = populacao1 / area1;
	float inversoDensidadePop1 = 1 / densidadePop1;
	float pibPerCapita1 = pib1 / populacao1;
	//cálculo do super poder da carta 1
	float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + inversoDensidadePop1;
	
	//atributos carta 2
	char pais2[10] = "EUA";
	char codigoCarta2[3] = " - 02";
	char nomeDaCapital2[20] = "Washington";
	int populacao2 = 1000;
	float area2 = 10;
	float pib2 = 5;
	int pontosTuristicos2 = 16;
	float densidadePop2 = populacao2 / area2;
	float inversoDensidadePop2 = 1 / densidadePop2;
	float pibPerCapita2 = pib2 / populacao2;
	//cálculo do super poder da carta 2
	float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidadePop2;
	
	int escolha1, escolha2;
	
	printf("### Bem-vindo ao Super Trunfo Mestre! ###\n");
	printf("Escolha o primeiro atributo a ser comparado: \n\n");
	printf("1 - População\n");
	printf("2 - Área\n");
	printf("3 - PIB\n");
	printf("4 - Pontos Turísticos\n");
	printf("5 - Densidade demográfica\n");
	printf("6 - PIB per Capita\n");
	printf("7 - Super Poder (soma de todos os atributos\n)");
	scanf("%d", &escolha1);
	
	printf("Escolha o segundo atributo a ser comparado: \n\n");
	printf("1 - População");
	printf("2 - Área");
	printf("3 - PIB");
	printf("4 - Pontos Turísticos");
	printf("5 - Densidade demográfica");
	printf("6 - PIB per Capita");
	printf("7 - Super Poder (soma de todos os atributos)");
	scanf("%d", &escolha2);
	
	if(escolha1 == escolha2){
		printf("Você escolheu o mesmo atributo. Escolha um diferente!");
	} else{
		printf("Segue o código...");
	}
	
	printf("### Resultado final ###\n\n");
	printf("%s X %s", pais1, pais2);
	printf("Atributos escolhidos");
	printf("Valor de cada atributo");
	printf("Soma dos atributos de cada carta");
	printf("Vencer");
	
}
