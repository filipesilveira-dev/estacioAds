#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"

int main(){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que ser� utilizada a localiza��opadr�so do sistema operacional
	
	//sintaxe padr�o do "printf"
	printf("Bem-vindo ao sistema de cadastro de cartas do Super Trunfo\n");
	printf("Aqui voc� ir� cadastrar os dados sobre as cidades do jogo\n");
	
	char estado1;
	char codigoCarta1[3];
	char nomeDaCidade1[20];
	int populacao1;
	//float area1 = ;
	//float pib1 = ;
	//int pontosTuristicos1 = ;
	
	printf("Digite uma letra de 'A' a 'H' para representar um Estado: ");
	scanf(" %c", &estado1);
	
	printf("Digite dois n�meros de '01' a '04' para compor, juntamente com a letra, o c�digo do estado: ");
	scanf("%s", &codigoCarta1);
	
	printf("Digite o nome da cidade: ");
	scanf("%s", &nomeDaCidade1);
	
	printf("Digite a popula��o da cidade: ");
	scanf("%d", &populacao1);
	printf("%d", populacao1);
}

