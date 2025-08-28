#include <stdio.h>

//recursividade: uma função chamando ela mesma (alternativa a laços de repetição)

void recursivo(int n){
	if(n > 0){
		//seráexibido o n (10, no caso). Ao chegar na função/procedimento "recursivo(n-1)", será exibibido 9 (n - 1). Como é uma função dentro de outra,
		//após imprimir o 9, "recursivo(n-1)" será chamado novamente, porém agora n=9. Isso se repetirá enquanto n > 0.
		printf("%d\n", n);
		//uso com decremento
		recursivo(n-1);
		//obs: nesse caso da recursividade, a ordem dos fatores afetará o resultado final. Caso o "printf" venha depois da recursividade, virará uma contagem 
		//progressiva. Por conta da pilha de informações e da dependência de execução.
	}
}

int main(){
	int quantidade = 10;
	
	//mensagem que aparecerá antes de chamar a função/procedimento. Dessa forma ela aparece apenas uma vez
	printf("Contagem regressiva... \n");
	//a função/procedimento sendo chamado na main
	recursivo(quantidade);
	
	return 0;
}
