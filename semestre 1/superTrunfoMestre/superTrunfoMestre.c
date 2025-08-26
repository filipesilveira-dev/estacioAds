#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"
#include <string.h> //permite utilizar o "strcpy()"

int main (){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que ser� utilizada a localiza��opadr�so do sistema operacional
	
	//atributos carta 1
	char pais1[10] = "Brasil";
	char codigoCarta1[10] = " - 01";
	char nomeDaCapital1[20] = "Fortaleza";
	int populacao1 = 1500;
	float area1 = 10;
	float pib1 = 50;
	int pontosTuristicos1 = 15;
	float densidadePop1 = populacao1 / area1;
	float inversoDensidadePop1 = 1 / densidadePop1;
	float pibPerCapita1 = pib1 / populacao1;
	//c�lculo do super poder da carta 1
	float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + inversoDensidadePop1;
	
	//atributos carta 2
	char pais2[10] = "EUA";
	char codigoCarta2[10] = " - 02";
	char nomeDaCapital2[20] = "Washington";
	int populacao2 = 1000;
	float area2 = 11;
	float pib2 = 50;
	int pontosTuristicos2 = 16;
	float densidadePop2 = populacao2 / area2;
	float inversoDensidadePop2 = 1 / densidadePop2;
	float pibPerCapita2 = pib2 / populacao2;
	//c�lculo do super poder da carta 2
	float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + inversoDensidadePop2;
	
	//vari�veis de escolha de primeiro e segundo atributo
	int escolha1, escolha2;

	//vari�veis para serem utilizadas na exibi��o dos resulados
	float atributo1Carta1, atributo1Carta2, atributo2Carta1, atributo2Carta2;
	char atributoUsado1[20];
	char atributoUsado2[20];
	
	//in�cio do programa
	printf("### Bem-vindo ao Super Trunfo Mestre! ###\n");
	printf("Escolha o primeiro atributo a ser comparado: \n\n");
	printf("1 - Popula��o\n");
	printf("2 - �rea\n");
	printf("3 - PIB\n");
	printf("4 - Pontos Tur�sticos\n");
	printf("5 - Densidade demogr�fica\n");
	printf("6 - PIB per Capita\n");
	printf("7 - Super Poder (soma de todos os atributos)\n\n");
	printf("Atributo: ");
	scanf("%d", &escolha1);
	
	//limpa a tela, deixando-a menos polu�da
	system("cls");
	
	//a depender da escolha do atributo, um dos casos ser� acionado
	switch(escolha1){
		case 1:	
				
			//copia "popula��o" em atributoUsado1, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado1, "Popula��o");
			//atribui��o do valor de atributo escolhido
			atributo1Carta1 = populacao1;
			atributo1Carta2 = populacao2;
			
		break;
		case 2:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado1, "�rea");
			atributo1Carta1 = area1;
			atributo1Carta2 = area2;
			
		break;
		case 3:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado1, "PIB");
			atributo1Carta1 = pib1;
			atributo1Carta2 = pib2;
			
		break;
		case 4:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado1, "Pontos Tur�sticos");
			atributo1Carta1 = pontosTuristicos1;
			atributo1Carta2 = pontosTuristicos2;
			
		break;
		case 5:

			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado1, "Densidade Demogr�fica");
			atributo1Carta1 = inversoDensidadePop1;
			atributo1Carta2 = inversoDensidadePop2;
			
		break;
		case 6:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado1, "PIB per capita");
			atributo1Carta1 = pibPerCapita1;
			atributo1Carta2 = pibPerCapita2;
			
		break;
		case 7:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado1, "Super Poder");
			atributo1Carta1 = superPoder1;
			atributo1Carta2 = superPoder2;
			
		break;
		
		//previne a inser��o de um n�mero inv�lido
		default:
			printf("Escolha um valor v�lido");
		break;
	}
	
	//escolha do segundo atributo
	printf("Escolha o segundo atributo a ser comparado: \n\n");
	printf("1 - Popula��o\n");
	printf("2 - �rea\n");
	printf("3 - PIB\n");
	printf("4 - Pontos Tur�sticos\n");
	printf("5 - Densidade demogr�fica\n");
	printf("6 - PIB per Capita\n");
	printf("7 - Super Poder (soma de todos os atributos)\n\n");
	printf("Atributo: ");
	scanf("%d", &escolha2);
	
	//previne a escolha do mesmo atributo escolhido anteriormente
	if(escolha1 == escolha2){
		printf("Voc� escolheu o mesmo atributo. Escolha um diferente!\n\n");
	} else {
		switch (escolha2){
			case 1:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado2, "Popula��o");
			atributo2Carta1 = populacao1;
			atributo2Carta2 = populacao2;
			
		break;
		case 2:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado2, "�rea");
			atributo2Carta1 = area1;
			atributo2Carta2 = area2;
			
		break;
		case 3:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado2, "PIB");
			atributo2Carta1 = pib1;
			atributo2Carta2 = pib2;
			
		break;
		case 4:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado2, "Pontos Tur�sticos");
			atributo2Carta1 = pontosTuristicos1;
			atributo2Carta2 = pontosTuristicos2;
			
		break;
		case 5:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado2, "Densidade Demogr�fica");
			atributo2Carta1 = inversoDensidadePop1;
			atributo2Carta2 = inversoDensidadePop2;
			
		break;
		case 6:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado2, "PIB per capita");
			atributo2Carta1 = pibPerCapita1;
			atributo2Carta2 = pibPerCapita2;
			
		break;
		case 7:
			
			//copia o segundo argumento na vari�vel, pois em C n�o � poss�vel fazer uma simples atribuii��o em array
			strcpy(atributoUsado2, "Super Poder");
			atributo2Carta1 = superPoder1;
			atributo2Carta2 = superPoder2;
			
		break;
		default:
			printf("Escolha um valor v�lido");
		break;
		}
	}
	
	//utilizado para verifica��o de valores atribu�dos a veri�veis
//	printf("\n\nCarta 1: \n");
//	printf("O primeiro atributo usado foi %s e seu valor � %.2f\n", atributoUsado1, atributo1Carta1);
//	printf("O segundo atributo usado foi %s e seu valor � %.2f\n\n", atributoUsado2, atributo2Carta1);
//	printf("Carta 2: \n");
//	printf("O primeiro atributo usado foi %s e seu valor � %.2f\n", atributoUsado1, atributo1Carta2);
//	printf("O segundo atributo usado foi %s e seu valor � %.2f\n\n", atributoUsado2, atributo2Carta2);
	
	system("pause");
	system("cls");
	
	//vari�veis que somam os valores dos atributos selecionados
	float somaAtributosCarta1 = atributo1Carta1 + atributo2Carta1;
	float somaAtributosCarta2 = atributo1Carta2 + atributo2Carta2;
	
	//mostra o resultado final
	printf("### Resultado final ###\n\n");
	printf("%s X %s\n", pais1, pais2);
	printf("Atributos utilizados: %s e %s\n", atributoUsado1, atributoUsado2);
	printf("Carta1: %.2f e %.2f\n", atributo1Carta1, atributo2Carta1);
	printf("Carta2: %.2f e %.2f\n", atributo1Carta2, atributo2Carta2);
	printf("Soma Carta 1: %.2f\n", somaAtributosCarta1);
	printf("Soma Carta 2: %.2f\n\n", somaAtributosCarta2);
	
	//mostra o grande vencedor ap�s a soma dos atributos
	if(somaAtributosCarta1 > somaAtributosCarta2){
		printf("*** %s � o grande vencedor! ***\n", pais1);
	} else if (somaAtributosCarta1 < somaAtributosCarta2){
		printf("*** %s � o grande vencedor! ***\n", pais2);
	} else {
		printf("Deu empate!\n");
	}
}
