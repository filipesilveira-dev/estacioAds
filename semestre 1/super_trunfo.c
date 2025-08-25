#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"

int main(){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que será utilizada a localizaçãopadrãso do sistema operacional
	
	//breve introdução visando melhor interação do usuário com o programa
	printf("Bem-vindo ao sistema de cadastro de cartas do Super Trunfo!\n");
	//linha de estilização
	printf("-----------------------------------------------------------\n\n");
	printf("Aqui vocë irá cadastrar os dados sobre as cidades do jogo.\n\n");
	printf("Vamos preencher as informações da primeira carta:\n\n");
	
	//variáveis que receberão os valores da carta 1
	char estado1;
	char codigoCarta1[3] = "01";
	char nomeDaCidade1[20] = "Fortaleza";
	int populacao1 = 1000;
	float area1 = 11;
	float pib1 = 5;
	int pontosTuristicos1 = 15;
	
//	//mostra instrução e aguarda e armazena resposta
//	printf("Digite uma letra de 'A' a 'H' para representar um Estado: ");
//	scanf(" %c", &estado1);
//	
//	printf("Digite dois números de '01' a '04' para compor, juntamente com a letra, o código do estado: ");
//	scanf("%s", &codigoCarta1);
//	
//	printf("Digite o nome da cidade: ");
//	scanf("%s", &nomeDaCidade1);
//	
//	printf("Digite a população da cidade: ");
//	scanf("%d", &populacao1);
//	
//	printf("Digite a área da cidade: ");
//	scanf("%f", &area1);
//	
//	printf("Digite o PIB da cidade: ");
//	scanf("%f", &pib1);
//	
//	printf("Digite a quantidade de pontos turísticos da cidade: ");
//	scanf("%d", &pontosTuristicos1);
	
	float densidadePop1 = populacao1 / area1;
	float inversoDensidadePop1 = 1 / densidadePop1;
	float pibPerCapita1 = pib1 / populacao1;
	//cálculo do super poder da carta 1
	float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + inversoDensidadePop1;
	
	//limpa a tela do usuário, diminuindo a poluição visual e visando uma melhor experiência
	//system("cls");
	
	//etapa de conferência dos dados inseridos
//	printf("Confira as informações cadastradas da Carta 1 antes de prosseguir: \n\n");
//	printf("Carta 1:\nEstado: %c\n", estado1);
//	printf("Código: %c%s\n", estado1, codigoCarta1);
//	printf("Nome da Cidade: %s\n", nomeDaCidade1);
//	printf("População: %d habitantes\n", populacao1);
//	printf("Área: %.2f km²\n", area1);
//	printf("PIB: %.2f bilhões de reais\n", pib1);
//	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
//	printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
//	printf("PIB Per Capita: %.2f reais\n\n", pibPerCapita1);
	
	//comando para o sistema aguardar uma nova interação do usuário para prosseguir. Permite tempo de conferência antes de limpar a tela novamente
	system("pause");
	system("cls");
	
	printf("Vamos preencher as informações da segunda carta\n\n");
	
	//variáveis que receberão os valores da carta 2
	char estado2;
	char codigoCarta2[3] = "02";
	char nomeDaCidade2[20] = "Teresina";
	int populacao2 = 1000;
	float area2 = 10;
	float pib2 = 5;
	int pontosTuristicos2 = 16;
	
//	printf("Digite uma letra de 'A' a 'H' para representar um Estado: ");
//	scanf(" %c", &estado2);
//	
//	printf("Digite dois números de '01' a '04' para compor, juntamente com a letra, o código do estado: ");
//	scanf("%s", &codigoCarta2);
//	
//	printf("Digite o nome da cidade: ");
//	scanf("%s", &nomeDaCidade2);
//	
//	printf("Digite a população da cidade: ");
//	scanf("%d", &populacao2);
//	
//	printf("Digite a área da cidade: ");
//	scanf("%f", &area2);
//	
//	printf("Digite o PIB da cidade: ");
//	scanf("%f", &pib2);
//	
//	printf("Digite a quantidade de pontos turísticos da cidade: ");
//	scanf("%d", &pontosTuristicos2);
	
	float densidadePop2 = populacao2 / area2;
	float inversoDensidadePop2 = 1 / densidadePop2;
	float pibPerCapita2 = pib2 / populacao2;
	//cálculo do super poder da carta 2
	float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidadePop2;
	
	//limpa a tela
//	system("cls");
//	
//	//conferência dos dados inseridos da carta 
//	printf("Confira as informações cadastradas da Carta 2 antes de prosseguir: \n\n");
//	printf("Carta 2:\nEstado: %c\n", estado2);
//	printf("Código: %c%s\n", estado2, codigoCarta2);
//	printf("Nome da Cidade: %s\n", nomeDaCidade2);
//	printf("População: %d habitantes\n", populacao2);
//	printf("Área: %.2f km²\n", area2);
//	printf("PIB: %.2f bilhões de reais\n", pib2);
//	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
//	printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
//	printf("PIB Per Capita: %.2f reais\n\n", pibPerCapita2);
//	
//	system("pause");
	system("cls");
	
	//saída mostrando as duas cartas e seus respectivos valores
	printf("As cartas cadastradas foram: \n\n");
	
	printf("Carta 1:\nEstado: %c\n", estado1);
	printf("Código: %c%s\n", estado1, codigoCarta1);
	printf("Nome da Cidade: %s\n", nomeDaCidade1);
	printf("População: %d\n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
	printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
	printf("PIB Per Capita: %.2f reais\n\n", pibPerCapita1);
	
	printf("Carta 2:\nEstado: %c\n", estado2);
	printf("Código: %c%s\n", estado1, codigoCarta2);
	printf("Nome da Cidade: %s\n", nomeDaCidade2);
	printf("População: %d habitantes\n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
	printf("PIB Per Capita: %.2f reais\n\n", pibPerCapita2);
	
	system("pause");
	system("cls");
	
	int escolha;
	
	//menu interativo para escolha de atributo a ser comparado
	printf("Escolha o atributo a ser comparado\n\n");
	printf("1 - População\n");
	printf("2 - Área\n");
	printf("3 - PIB\n");
	printf("4 - Número de Pontos Turísticos\n");
	printf("5 - Densidade Demográfica\n\n");
	printf("Escolha: ");
	scanf("%d", &escolha);
	
	system("cls");
	
	printf("### Resultado ###\n\n");
	
	//a depender da escolha do usuário, cada caso imprimirá um trecho de código específico
	switch (escolha){
		case 1:
		printf("%s X ", nomeDaCidade1);
		printf("%s\n", nomeDaCidade2);
		printf("Atributo escolhido: População\n");
		printf("%d habitantes X ", populacao1);
		printf("%d habitantes\n\n", populacao2);
			if(populacao1 > populacao2){
				printf("A Carta 1 venceu!");
			} else if (populacao1 < populacao2){
				printf("A Carta 2 venceu");
			} else {
				printf("Deu empate!");
			}
		break;
		case 2:
		printf("%s X ", nomeDaCidade1);
		printf("%s\n", nomeDaCidade2);
		printf("Atributo escolhido: Área\n");
		printf("%.2f km² X ", area1);
		printf("%.2f km²\n\n", area2);
			if(area1 > area2){
				printf("A Carta 1 venceu!");
			} else if (area1 < area2){
				printf("A Carta 2 venceu");
			} else {
				printf("Deu empate!");
			}
		break;
		case 3:
		printf("%s X ", nomeDaCidade1);
		printf("%s\n", nomeDaCidade2);
		printf("Atributo escolhido: PIB\n");
		printf("%.2f bilhões de reais X ", pib1);
		printf("%.2f bilhões de reais\n\n", pib2);
			if(pib1 > pib2){
				printf("A Carta 1 venceu!");
			} else if (pib1 < pib2){
				printf("A Carta 2 venceu");
			} else {
				printf("Deu empate!");
			}
		break;
		case 4:
		printf("%s X ", nomeDaCidade1);
		printf("%s\n", nomeDaCidade2);
		printf("Atributo escolhido: Número de Pontos Turísticos\n");
		printf("%d pontos turísticos X ", pontosTuristicos1);
		printf("%d pontos turísticos\n\n", pontosTuristicos2);
			if(pontosTuristicos1 > pontosTuristicos2){
				printf("A Carta 1 venceu!");
			} else if (pontosTuristicos1 < pontosTuristicos2){
				printf("A Carta 2 venceu");
			} else {
				printf("Deu empate!");
			}
		break;
		//a menor densidade demográfica vence
		case 5:
		printf("%s X ", nomeDaCidade1);
		printf("%s\n", nomeDaCidade2);
		printf("Atributo escolhido: Densidade Demográfica\n");
		printf("%.2f hab/km² X ", densidadePop1);
		printf("%.2f hab/km²\n\n", densidadePop2);
			if(densidadePop1 < densidadePop2){
				printf("A Carta 1 venceu!");
			} else if (densidadePop1 > densidadePop2){
				printf("A Carta 2 venceu");
			} else {
				printf("Deu empate!");
			}
		break;
		default:
			printf("Escolha uma opção válida");
		break;
	}
	//declaração das variáveis resultado que serão exibidas
	int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos, resultadoDensidadePop, resultadoPibPerCapita, resultadoSuperPoder;
	
	//atribuição de valor às variáveis resultado (comparando cartas atributo por atributo)
//	resultadoPopulacao = populacao1 > populacao2;
//	resultadoArea = area1 > area2;
//	resultadoPib = pib1 > pib2;
//	resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
//	resultadoDensidadePop = densidadePop1 < densidadePop2;
//	resultadoPibPerCapita = pibPerCapita1 > pibPerCapita2;
//	resultadoSuperPoder = superPoder1 > superPoder2;
	
//	system("pause");
//	system("cls");
//	
//	printf("***Comparação entre as cartas***\n\n");
//	if(populacao1 > populacao2){
//		printf("População: ");
//		printf("Carta 1: %d habitantes X ", populacao1);
//		printf("Carta 2: %d habitantes\n", populacao2);
//		printf("Resultado (População): Carta 1 venceu\n\n");
//	} else if(populacao1 < populacao2){
//		printf("População: ");
//		printf("Carta 1: %d habitantes X ", populacao1);
//		printf("Carta 2: %d habitantes\n", populacao2);
//		printf("Resultado (População): Carta 2 venceu\n\n");
//	} else {
//		printf("Resultado (População): Deu empate\n\n");
//	}
//	
//	if(area1 > area2){
//		printf("Área: Carta 1 venceu\n");
//	} else if(area1 < area2){
//		printf("Área: Carta 2 venceu\n");
//	} else {
//		printf("Área: Deu empate\n");
//	}
//	
//	if(pib1 > pib2){
//		printf("PIB: Carta 1 venceu\n");
//	} else if(pib1 < pib2){
//		printf("PIB: Carta 2 venceu\n");
//	} else {
//		printf("PIB: Deu empate\n");
//	}
//	
//	if(pontosTuristicos1 > pontosTuristicos2){
//		printf("Pontos Turísticos: Carta 1 venceu\n");
//	} else if(pontosTuristicos1 < pontosTuristicos2){
//		printf("Pontos Turísticos: Carta 2 venceu\n");
//	} else {
//		printf("Pontos Turísticos: Deu empate\n");
//	}
//	
//	if(densidadePop1 < densidadePop2){
//		printf("Densidade Populacional: Carta 1 venceu\n");
//	} else if(densidadePop1 > densidadePop2){
//		printf("Densidade Populacional: Carta 2 venceu\n");
//	} else {
//		printf("Densidade Populacional: Deu empate\n");
//	}
//	
//	if(pibPerCapita1 > pibPerCapita2){
//		printf("PIB per Capita: Carta 1 venceu\n");
//	} else if(pibPerCapita1 < pibPerCapita2){
//		printf("PIB per Capita: Carta 2 venceu\n");
//	} else {
//		printf("PIB per Capita: Deu empate\n");
//	}
//	
//	if(superPoder1 > superPoder2){
//		printf("Super Poder: Carta 1 venceu\n");
//	} else if(superPoder1 < superPoder2){
//		printf("Super Poder: Carta 2 venceu\n");
//	} else {
//		printf("Super Poder: Deu empate\n");
//	}	
//	printf("População: %d\n", resultadoPopulacao);
//	printf("Área: %d\n", resultadoArea);
//	printf("PIB: %d\n", resultadoPib);
//	printf("Pontos Turísticos: %d\n", resultadoPontosTuristicos);
//	printf("Densidade Populacional: %d\n", resultadoDensidadePop);
//	printf("PIB per Capita: %d\n", resultadoPibPerCapita);
//	printf("Super Poder: %d\n", resultadoSuperPoder);
}

