#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"

int main(){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que será utilizada a localizaçãopadrãso do sistema operacional
	
	//sintaxe padrão do "printf"
	printf("Bem-vindo ao sistema de cadastro de cartas do Super Trunfo\n");
	printf("Aqui vocë irá cadastrar os dados sobre as cidades do jogo\n");
	
	char estado1;
	char codigoCarta1[3];
	char nomeDaCidade1[20];
	int populacao1;
	//float area1 = ;
	//float pib1 = ;
	//int pontosTuristicos1 = ;
	
	printf("Digite uma letra de 'A' a 'H' para representar um Estado: ");
	scanf(" %c", &estado1);
	
	printf("Digite dois números de '01' a '04' para compor, juntamente com a letra, o código do estado: ");
	scanf("%s", &codigoCarta1);
	
	printf("Digite o nome da cidade: ");
	scanf("%s", &nomeDaCidade1);
	
	printf("Digite a população da cidade: ");
	scanf("%d", &populacao1);
	printf("%d", populacao1);
}

