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
	char codigoCarta1[3];
	char nomeDaCidade1[20];
	int populacao1;
	float area1;
	float pib1;
	int pontosTuristicos1;
	
	//mostra instrução e aguarda e armazena resposta
	printf("Digite uma letra de 'A' a 'H' para representar um Estado: ");
	scanf(" %c", &estado1);
	
	printf("Digite dois números de '01' a '04' para compor, juntamente com a letra, o código do estado: ");
	scanf("%s", &codigoCarta1);
	
	printf("Digite o nome da cidade: ");
	scanf("%s", &nomeDaCidade1);
	
	printf("Digite a população da cidade: ");
	scanf("%d", &populacao1);
	
	printf("Digite a área da cidade: ");
	scanf("%f", &area1);
	
	printf("Digite o PIB da cidade: ");
	scanf("%f", &pib1);
	
	printf("Digite a quantidade de pontos turísticos da cidade: ");
	scanf("%d", &pontosTuristicos1);
	
	float densidadePop1 = populacao1 / area1;
	float pibPerCapita1 = pib1 / populacao1;
	
	//limpa a tela do usuário, diminuindo a poluição visual e visando uma melhor experiência
	system("cls");
	
	//etapa de conferência dos dados inseridos
	printf("Confira as informações cadastradas da Carta 1 antes de prosseguir: \n\n");
	printf("Carta 1:\nEstado: %c\n", estado1);
	printf("Código: %c%s\n", estado1, codigoCarta1);
	printf("Nome da Cidade: %s\n", nomeDaCidade1);
	printf("População: %d\n", populacao1);
	printf("Área: %.2f km²\n", area1);
	printf("PIB: %.2f bilhões de reais\n", pib1);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
	printf("Densidade Populacional: %.2f\n", densidadePop1);
	printf("PIB Per Capita: %.2f\n\n", pibPerCapita1);
	
	//comando para o sistema aguardar uma nova interação do usuário para prosseguir. Permite tempo de conferência antes de limpar a tela novamente
	system("pause");
	system("cls");
	
	printf("Vamos preencher as informações da segunda carta\n\n");
	
	//variáveis que receberão os valores da carta 2
	char estado2;
	char codigoCarta2[3];
	char nomeDaCidade2[20];
	int populacao2;
	float area2;
	float pib2;
	int pontosTuristicos2;
	
	printf("Digite uma letra de 'A' a 'H' para representar um Estado: ");
	scanf(" %c", &estado2);
	
	printf("Digite dois números de '01' a '04' para compor, juntamente com a letra, o código do estado: ");
	scanf("%s", &codigoCarta2);
	
	printf("Digite o nome da cidade: ");
	scanf("%s", &nomeDaCidade2);
	
	printf("Digite a população da cidade: ");
	scanf("%d", &populacao2);
	
	printf("Digite a área da cidade: ");
	scanf("%f", &area2);
	
	printf("Digite o PIB da cidade: ");
	scanf("%f", &pib2);
	
	printf("Digite a quantidade de pontos turísticos da cidade: ");
	scanf("%d", &pontosTuristicos2);
	
	float densidadePop2 = populacao2 / area2;
	float pibPerCapita2 = pib2 / populacao2;
	
	//limpa a tela
	system("cls");
	
	//conferência dos dados inseridos da carta 
	printf("Confira as informações cadastradas da Carta 2 antes de prosseguir: \n\n");
	printf("Carta 2:\nEstado: %c\n", estado2);
	printf("Código: %c%s\n", estado2, codigoCarta2);
	printf("Nome da Cidade: %s\n", nomeDaCidade2);
	printf("População: %d\n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
	printf("PIB Per Capita: %.2f\n\n reais", pibPerCapita2);
	
	system("pause");
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
	printf("PIB Per Capita: %.2f\n\n reais", pibPerCapita1);
	
	printf("Carta 2:\nEstado: %c\n", estado2);
	printf("Código: %c%s\n", estado1, codigoCarta2);
	printf("Nome da Cidade: %s\n", nomeDaCidade2);
	printf("População: %d\n", populacao2);
	printf("Área: %.2f km²\n", area2);
	printf("PIB: %.2f bilhões de reais\n", pib2);
	printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
	printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);
	printf("PIB Per Capita: %.2f\n\n reais", pibPerCapita2);
}

