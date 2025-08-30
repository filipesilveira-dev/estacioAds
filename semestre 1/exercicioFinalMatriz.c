#include <stdio.h>

//constantes para facilitar manipulação do código
#define LINHA 5
#define COLUNA 5

int main(){
	
	//matriz 5x5 declarada e inicializada pelas constantes
	int matriz[LINHA][COLUNA];
	//criada para achar um valor dentro da matriz
	int target = 9;
	//criada como flag para uma condicional dentro de um laço de repetição (falso)
	int found = 0;
	//criada para construir uma matriz sem precisar declarar valor por valor
	int soma = 1;
	
	//cria uma matriz 5x5, onde o primeiro elemento é "1" e, à medida em que o laço continua, aumenta uma unidade
	//loop externo controla as linhas
	for(int i = 0; i < LINHA; i++){
		//loop interno controla as colunas
		for(int j = 0; j < COLUNA; j++){
			//a cada posição o valor do elemento à "soma" mais "1"
			matriz[i][j] = soma;
			//incrementador de "soma"
			soma++;
			//mostra cada valor de acordo com a posição
			printf("%d ", matriz[i][j]);
		}
		//salta uma linha após terminar a primeira linha e ir para a segunda
		printf("\n");
	}
	
	//busca em "matriz" por um elemento específico (target)
	//loop externo controla as linhas
	for(int i = 0; i < LINHA; i++){
		//loop interno controla as colunas
		for(int j = 0; j < COLUNA; j++){
			//condicional: caso o valor de determinado elemento seja igual ao target (9), imprime o valor de taget e o índice de onde foi encontrado
			if(matriz[i][j] == target){
				printf("\nO valor %d encontrado no indice [%d][%d]", target, i, j);
				//muda o valor da flag "found" para 1 (verdadeiro)
				found = 1;
				//sai do laço interno de repetição
				break;
			}
		}
		//condicional: caso found seja verdadeiro, ou seja, caso tenha achado o target
		if(found){
			//sai do laço externo de repetição
			break;
		}
	}
	
	return 0;
}
