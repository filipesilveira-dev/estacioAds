#include <stdio.h>

int main(){
	int i = 6;
	
	//faz contagem de 1 a 5
	while(i<=5){
		//trecho de c�digo
		printf("O valor vem do while ");
		printf("%d\n", i);
		//incremento
		i++;
	}
	 
	 //garante pelo menos a execu��o do c�digo uma vez
	 //�til para situa��o de entrada do usu�rio, onde ser� executado o c�digo uma vez antes da condicional
	 do{
	 	//trecho de c�digo
	 	printf("O valor vem do do/while ");
		printf("%d\n", i);
		//incremento
		i++;
	 } while (i<=5);
	 
	 //utilizado geralmente quando se sabe o tamanho do loop previamente
	 for (int j = 1; j <=5; j++){
	 	printf("O valor vem do for ");
		printf("%d\n", j);
	 }

	
	 
	 return 0;
}
