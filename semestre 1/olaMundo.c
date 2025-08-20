#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"



int main(){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que será utilizada a localizaçãopadrãso do sistema operacional
	//sintaxe padrão do "printf"
	printf("Olá, mundo!\n");
	
	int idade = 25;
	float altura = 1.75;
	char opcao = 'S';
	char nome[20] = "sergio";
	
	printf("A idade do %s é: %d\n", nome, idade); // %s faz referência à "sting" e %d a números inteiros
	printf("A altura é: %.2f\n", altura);	//o ".2" entre o % e f indica que é para mostrar até duas casas decimais
	printf("A opção é: %c\n", opcao);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);	//o scaf solicita uma interação do usuário. Ele vai pegar o que foi digitado e aramzenar na variável idade por meio do "&"
	printf("A nova idade é %d\n", idade);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);	
	printf("A nova altura é: %.2f\n", altura);
	
	printf("Digite sua nome: ");
	scanf("%s", &nome);	
	printf("O novo nome é: %s\n", nome);
	
	printf("Digite sua opção: ");
	scanf(" %c", &opcao);	/*o "enter" é considerado um caractere. Nessa situação específica de leitura de um caractere por meio de scanf, é importante 
	acrescentar um espaço antes do especificador de formato. É uma particularidade do scanf. Sem o espaço, o programa entenderá o "enter" como a resposta do 
	usuáario*/
	printf("O novo opção é: %c\n", opcao);
}

/*

Especificadores de formato

%d: número inteiro no formato decimal
%i: equivalente a %d
%f: número de ponto flutuante no formato padrão
%e: número de ponto flutuante na notação científica
%c: único caractere
%s: cadeia de caracteres "string"

*/
