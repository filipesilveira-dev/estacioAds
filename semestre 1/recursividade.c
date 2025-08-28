#include <stdio.h>

//recursividade: uma fun��o chamando ela mesma (alternativa a la�os de repeti��o)

void recursivo(int n){
	if(n > 0){
		//ser�exibido o n (10, no caso). Ao chegar na fun��o/procedimento "recursivo(n-1)", ser� exibibido 9 (n - 1). Como � uma fun��o dentro de outra,
		//ap�s imprimir o 9, "recursivo(n-1)" ser� chamado novamente, por�m agora n=9. Isso se repetir� enquanto n > 0.
		printf("%d\n", n);
		//uso com decremento
		recursivo(n-1);
		//obs: nesse caso da recursividade, a ordem dos fatores afetar� o resultado final. Caso o "printf" venha depois da recursividade, virar� uma contagem 
		//progressiva. Por conta da pilha de informa��es e da depend�ncia de execu��o.
	}
}

int main(){
	int quantidade = 10;
	
	//mensagem que aparecer� antes de chamar a fun��o/procedimento. Dessa forma ela aparece apenas uma vez
	printf("Contagem regressiva... \n");
	//a fun��o/procedimento sendo chamado na main
	recursivo(quantidade);
	
	return 0;
}
