#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"

int main(){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que ser� utilizada a localiza��opadr�so do sistema operacional
	
	//sintaxe padr�o do "printf"
	printf("Bem-vindo ao sistema de cadastro de cartas do Super Trunfo!\n");
	printf("-----------------------------------------------------------\n\n");
	printf("Aqui voc� ir� cadastrar os dados sobre as cidades do jogo.\n\n");
	printf("Vamos preencher as informa��es da primeira carta:\n\n");
	
	char estado1;
	char codigoCarta1[3];
	char nomeDaCidade1[20];
	int populacao1;
	float area1;
	float pib1;
	int pontosTuristicos1;
	
	printf("Digite uma letra de 'A' a 'H' para representar um Estado: ");
	scanf(" %c", &estado1);
	
	printf("Digite dois n�meros de '01' a '04' para compor, juntamente com a letra, o c�digo do estado: ");
	scanf("%s", &codigoCarta1);
	
	printf("Digite o nome da cidade: ");
	scanf("%s", &nomeDaCidade1);
	
	printf("Digite a popula��o da cidade: ");
	scanf("%d", &populacao1);
	
	printf("Digite a �rea da cidade: ");
	scanf("%f", &area1);
	
	printf("Digite o PIB da cidade: ");
	scanf("%f", &pib1);
	
	printf("Digite a quantidade de pontos tur�sticos da cidade: ");
	scanf("%d", &pontosTuristicos1);
	
	//system("pause");
	system("cls");
	
	printf("Confira as informa��es cadastradas da Carta 1 antes de prosseguir: \n\n");
	printf("Carta 1:\nEstado: %c\n", estado1);
	printf("C�digo: %c%s\n", estado1, codigoCarta1);
	printf("Nome da Cidade: %s\n", nomeDaCidade1);
	printf("Popula��o: %d\n", populacao1);
	printf("�rea: %.2f km�\n", area1);
	printf("PIB: %.2f bilh�es de reais\n", pib1);
	printf("N�mero de Pontos Tur�sticos: %d\n\n", pontosTuristicos1);
	
	system("pause");
	system("cls");
	
	printf("Vamos preencher as informa��es da segunda carta\n\n");
	
	char estado2;
	char codigoCarta2[3];
	char nomeDaCidade2[20];
	int populacao2;
	float area2;
	float pib2;
	int pontosTuristicos2;
	
	printf("Digite uma letra de 'A' a 'H' para representar um Estado: ");
	scanf(" %c", &estado2);
	
	printf("Digite dois n�meros de '01' a '04' para compor, juntamente com a letra, o c�digo do estado: ");
	scanf("%s", &codigoCarta2);
	
	printf("Digite o nome da cidade: ");
	scanf("%s", &nomeDaCidade2);
	
	printf("Digite a popula��o da cidade: ");
	scanf("%d", &populacao2);
	
	printf("Digite a �rea da cidade: ");
	scanf("%f", &area2);
	
	printf("Digite o PIB da cidade: ");
	scanf("%f", &pib2);
	
	printf("Digite a quantidade de pontos tur�sticos da cidade: ");
	scanf("%d", &pontosTuristicos2);
	
	//system("pause");
	system("cls");
	
	printf("Confira as informa��es cadastradas da Carta 2 antes de prosseguir: \n\n");
	printf("Carta 2:\nEstado: %c\n", estado2);
	printf("C�digo: %c%s\n", estado1, codigoCarta2);
	printf("Nome da Cidade: %s\n", nomeDaCidade2);
	printf("Popula��o: %d\n", populacao2);
	printf("�rea: %.2f km�\n", area2);
	printf("PIB: %.2f bilh�es de reais\n", pib2);
	printf("N�mero de Pontos Tur�sticos: %d\n\n", pontosTuristicos2);
	
	system("pause");
	system("cls");
	
	printf("As cartas cadastradas foram: \n\n");
	
	printf("Carta 1:\nEstado: %c\n", estado1);
	printf("C�digo: %c%s\n", estado1, codigoCarta1);
	printf("Nome da Cidade: %s\n", nomeDaCidade1);
	printf("Popula��o: %d\n", populacao1);
	printf("�rea: %.2f km�\n", area1);
	printf("PIB: %.2f bilh�es de reais\n", pib1);
	printf("N�mero de Pontos Tur�sticos: %d\n\n\n", pontosTuristicos1);
	
	printf("Carta 2:\nEstado: %c\n", estado2);
	printf("C�digo: %c%s\n", estado1, codigoCarta2);
	printf("Nome da Cidade: %s\n", nomeDaCidade2);
	printf("Popula��o: %d\n", populacao2);
	printf("�rea: %.2f km�\n", area2);
	printf("PIB: %.2f bilh�es de reais\n", pib2);
	printf("N�mero de Pontos Tur�sticos: %d\n", pontosTuristicos2);
}

