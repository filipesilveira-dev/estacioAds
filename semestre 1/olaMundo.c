#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"



int main(){
	setlocale(LC_ALL, "");	// as aspas vazias indicam que ser� utilizada a localiza��opadr�so do sistema operacional
	//sintaxe padr�o do "printf"
	printf("Ol�, mundo!\n");
	
	int idade = 25;
	float altura = 1.75;
	char opcao = 'S';
	char nome[20] = "sergio";
	
	printf("A idade do %s �: %d\n", nome, idade); // %s faz refer�ncia � "sting" e %d a n�meros inteiros
	printf("A altura �: %.2f\n", altura);	//o ".2" entre o % e f indica que � para mostrar at� duas casas decimais
	printf("A op��o �: %c\n", opcao);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);	//o scaf solicita uma intera��o do usu�rio. Ele vai pegar o que foi digitado e aramzenar na vari�vel idade por meio do "&"
	printf("A nova idade � %d\n", idade);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);	
	printf("A nova altura �: %.2f\n", altura);
	
	printf("Digite sua nome: ");
	scanf("%s", &nome);	
	printf("O novo nome �: %s\n", nome);
	
	printf("Digite sua op��o: ");
	scanf(" %c", &opcao);	/*o "enter" � considerado um caractere. Nessa situa��o espec�fica de leitura de um caractere por meio de scanf, � importante 
	acrescentar um espa�o antes do especificador de formato. � uma particularidade do scanf. Sem o espa�o, o programa entender� o "enter" como a resposta do 
	usu�ario*/
	printf("O novo op��o �: %c\n", opcao);
}

/*

Especificadores de formato

%d: n�mero inteiro no formato decimal
%i: equivalente a %d
%f: n�mero de ponto flutuante no formato padr�o
%e: n�mero de ponto flutuante na nota��o cient�fica
%c: �nico caractere
%s: cadeia de caracteres "string"

*/
