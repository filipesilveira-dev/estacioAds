#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"

int main(){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que ser� utilizada a localiza��opadr�so do sistema operacional
	
	//breve introdu��o visando melhor intera��o do usu�rio com o programa
	printf("Bem-vindo ao sistema de cadastro de cartas do Super Trunfo!\n");
	//linha de estiliza��o
	printf("-----------------------------------------------------------\n\n");
	printf("Aqui voc� ir� cadastrar os dados sobre as cidades do jogo.\n\n");
	printf("Vamos preencher as informa��es da primeira carta:\n\n");
	
	//vari�veis que receber�o os valores da carta 1
	char estado1;
	char codigoCarta1[3] = "01";
	char nomeDaCidade1[20] = "Fortaleza";
	int populacao1 = 1000;
	float area1 = 11;
	float pib1 = 5;
	int pontosTuristicos1 = 15;
	
//	//mostra instru��o e aguarda e armazena resposta
//	printf("Digite uma letra de 'A' a 'H' para representar um Estado: ");
//	scanf(" %c", &estado1);
//	
//	printf("Digite dois n�meros de '01' a '04' para compor, juntamente com a letra, o c�digo do estado: ");
//	scanf("%s", &codigoCarta1);
//	
//	printf("Digite o nome da cidade: ");
//	scanf("%s", &nomeDaCidade1);
//	
//	printf("Digite a popula��o da cidade: ");
//	scanf("%d", &populacao1);
//	
//	printf("Digite a �rea da cidade: ");
//	scanf("%f", &area1);
//	
//	printf("Digite o PIB da cidade: ");
//	scanf("%f", &pib1);
//	
//	printf("Digite a quantidade de pontos tur�sticos da cidade: ");
//	scanf("%d", &pontosTuristicos1);
	
	float densidadePop1 = populacao1 / area1;
	float inversoDensidadePop1 = 1 / densidadePop1;
	float pibPerCapita1 = pib1 / populacao1;
	//c�lculo do super poder da carta 1
	float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + inversoDensidadePop1;
	
	//limpa a tela do usu�rio, diminuindo a polui��o visual e visando uma melhor experi�ncia
	//system("cls");
	
	//etapa de confer�ncia dos dados inseridos
//	printf("Confira as informa��es cadastradas da Carta 1 antes de prosseguir: \n\n");
//	printf("Carta 1:\nEstado: %c\n", estado1);
//	printf("C�digo: %c%s\n", estado1, codigoCarta1);
//	printf("Nome da Cidade: %s\n", nomeDaCidade1);
//	printf("Popula��o: %d habitantes\n", populacao1);
//	printf("�rea: %.2f km�\n", area1);
//	printf("PIB: %.2f bilh�es de reais\n", pib1);
//	printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos1);
//	printf("Densidade Populacional: %.2f hab/km�\n", densidadePop1);
//	printf("PIB Per Capita: %.2f reais\n\n", pibPerCapita1);
	
	//comando para o sistema aguardar uma nova intera��o do usu�rio para prosseguir. Permite tempo de confer�ncia antes de limpar a tela novamente
	system("pause");
	system("cls");
	
	printf("Vamos preencher as informa��es da segunda carta\n\n");
	
	//vari�veis que receber�o os valores da carta 2
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
//	printf("Digite dois n�meros de '01' a '04' para compor, juntamente com a letra, o c�digo do estado: ");
//	scanf("%s", &codigoCarta2);
//	
//	printf("Digite o nome da cidade: ");
//	scanf("%s", &nomeDaCidade2);
//	
//	printf("Digite a popula��o da cidade: ");
//	scanf("%d", &populacao2);
//	
//	printf("Digite a �rea da cidade: ");
//	scanf("%f", &area2);
//	
//	printf("Digite o PIB da cidade: ");
//	scanf("%f", &pib2);
//	
//	printf("Digite a quantidade de pontos tur�sticos da cidade: ");
//	scanf("%d", &pontosTuristicos2);
	
	float densidadePop2 = populacao2 / area2;
	float inversoDensidadePop2 = 1 / densidadePop2;
	float pibPerCapita2 = pib2 / populacao2;
	//c�lculo do super poder da carta 2
	float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidadePop2;
	
	//limpa a tela
//	system("cls");
//	
//	//confer�ncia dos dados inseridos da carta 
//	printf("Confira as informa��es cadastradas da Carta 2 antes de prosseguir: \n\n");
//	printf("Carta 2:\nEstado: %c\n", estado2);
//	printf("C�digo: %c%s\n", estado2, codigoCarta2);
//	printf("Nome da Cidade: %s\n", nomeDaCidade2);
//	printf("Popula��o: %d habitantes\n", populacao2);
//	printf("�rea: %.2f km�\n", area2);
//	printf("PIB: %.2f bilh�es de reais\n", pib2);
//	printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos2);
//	printf("Densidade Populacional: %.2f hab/km�\n", densidadePop2);
//	printf("PIB Per Capita: %.2f reais\n\n", pibPerCapita2);
//	
//	system("pause");
	system("cls");
	
	//sa�da mostrando as duas cartas e seus respectivos valores
	printf("As cartas cadastradas foram: \n\n");
	
	printf("Carta 1:\nEstado: %c\n", estado1);
	printf("C�digo: %c%s\n", estado1, codigoCarta1);
	printf("Nome da Cidade: %s\n", nomeDaCidade1);
	printf("Popula��o: %d\n", populacao1);
	printf("�rea: %.2f km�\n", area1);
	printf("PIB: %.2f bilh�es de reais\n", pib1);
	printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos1);
	printf("Densidade Populacional: %.2f hab/km�\n", densidadePop1);
	printf("PIB Per Capita: %.2f reais\n\n", pibPerCapita1);
	
	printf("Carta 2:\nEstado: %c\n", estado2);
	printf("C�digo: %c%s\n", estado1, codigoCarta2);
	printf("Nome da Cidade: %s\n", nomeDaCidade2);
	printf("Popula��o: %d habitantes\n", populacao2);
	printf("�rea: %.2f km�\n", area2);
	printf("PIB: %.2f bilh�es de reais\n", pib2);
	printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos2);
	printf("Densidade Populacional: %.2f hab/km�\n", densidadePop2);
	printf("PIB Per Capita: %.2f reais\n\n", pibPerCapita2);
	
	system("pause");
	system("cls");
	
	int escolha;
	
	//menu interativo para escolha de atributo a ser comparado
	printf("Escolha o atributo a ser comparado\n\n");
	printf("1 - Popula��o\n");
	printf("2 - �rea\n");
	printf("3 - PIB\n");
	printf("4 - N�mero de Pontos Tur�sticos\n");
	printf("5 - Densidade Demogr�fica\n\n");
	printf("Escolha: ");
	scanf("%d", &escolha);
	
	system("cls");
	
	printf("### Resultado ###\n\n");
	
	//a depender da escolha do usu�rio, cada caso imprimir� um trecho de c�digo espec�fico
	switch (escolha){
		case 1:
		printf("%s X ", nomeDaCidade1);
		printf("%s\n", nomeDaCidade2);
		printf("Atributo escolhido: Popula��o\n");
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
		printf("Atributo escolhido: �rea\n");
		printf("%.2f km� X ", area1);
		printf("%.2f km�\n\n", area2);
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
		printf("%.2f bilh�es de reais X ", pib1);
		printf("%.2f bilh�es de reais\n\n", pib2);
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
		printf("Atributo escolhido: N�mero de Pontos Tur�sticos\n");
		printf("%d pontos tur�sticos X ", pontosTuristicos1);
		printf("%d pontos tur�sticos\n\n", pontosTuristicos2);
			if(pontosTuristicos1 > pontosTuristicos2){
				printf("A Carta 1 venceu!");
			} else if (pontosTuristicos1 < pontosTuristicos2){
				printf("A Carta 2 venceu");
			} else {
				printf("Deu empate!");
			}
		break;
		//a menor densidade demogr�fica vence
		case 5:
		printf("%s X ", nomeDaCidade1);
		printf("%s\n", nomeDaCidade2);
		printf("Atributo escolhido: Densidade Demogr�fica\n");
		printf("%.2f hab/km� X ", densidadePop1);
		printf("%.2f hab/km�\n\n", densidadePop2);
			if(densidadePop1 < densidadePop2){
				printf("A Carta 1 venceu!");
			} else if (densidadePop1 > densidadePop2){
				printf("A Carta 2 venceu");
			} else {
				printf("Deu empate!");
			}
		break;
		default:
			printf("Escolha uma op��o v�lida");
		break;
	}
	//declara��o das vari�veis resultado que ser�o exibidas
	int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos, resultadoDensidadePop, resultadoPibPerCapita, resultadoSuperPoder;
	
	//atribui��o de valor �s vari�veis resultado (comparando cartas atributo por atributo)
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
//	printf("***Compara��o entre as cartas***\n\n");
//	if(populacao1 > populacao2){
//		printf("Popula��o: ");
//		printf("Carta 1: %d habitantes X ", populacao1);
//		printf("Carta 2: %d habitantes\n", populacao2);
//		printf("Resultado (Popula��o): Carta 1 venceu\n\n");
//	} else if(populacao1 < populacao2){
//		printf("Popula��o: ");
//		printf("Carta 1: %d habitantes X ", populacao1);
//		printf("Carta 2: %d habitantes\n", populacao2);
//		printf("Resultado (Popula��o): Carta 2 venceu\n\n");
//	} else {
//		printf("Resultado (Popula��o): Deu empate\n\n");
//	}
//	
//	if(area1 > area2){
//		printf("�rea: Carta 1 venceu\n");
//	} else if(area1 < area2){
//		printf("�rea: Carta 2 venceu\n");
//	} else {
//		printf("�rea: Deu empate\n");
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
//		printf("Pontos Tur�sticos: Carta 1 venceu\n");
//	} else if(pontosTuristicos1 < pontosTuristicos2){
//		printf("Pontos Tur�sticos: Carta 2 venceu\n");
//	} else {
//		printf("Pontos Tur�sticos: Deu empate\n");
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
//	printf("Popula��o: %d\n", resultadoPopulacao);
//	printf("�rea: %d\n", resultadoArea);
//	printf("PIB: %d\n", resultadoPib);
//	printf("Pontos Tur�sticos: %d\n", resultadoPontosTuristicos);
//	printf("Densidade Populacional: %d\n", resultadoDensidadePop);
//	printf("PIB per Capita: %d\n", resultadoPibPerCapita);
//	printf("Super Poder: %d\n", resultadoSuperPoder);
}

