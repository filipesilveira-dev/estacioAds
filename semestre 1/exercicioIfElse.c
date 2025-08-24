#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"

//temperatura
//umidade
//n�vel de estoque

int main(){
	setlocale(LC_ALL, "");
	
	float temperatura, umidade;
	unsigned int nivelDeEstoque, estoqueMinimo = 1000; //unsigned pois o estoque sempre ser� positivo (desloca o intervalo de n�meros para apenas positivos)
	
	printf("Entre com a temperatura: \n");
	scanf("%f", &temperatura);
	
	printf("Entre com a umidade: \n");
	scanf("%f", &umidade);
	
	printf("Entre com o estoque: \n");
	scanf("%d", &nivelDeEstoque);
	
	if( temperatura > 30){
		printf("Temperatura est� alta\n");
	} else {
		printf("Temperatura est� dentro dos par�metros\n");
	}
	
	if( umidade > 50){
		printf("Umidade elevada\n");
	} else {
		printf("Umidade est� dentro dos par�metros\n");
	}
	
	if( nivelDeEstoque < estoqueMinimo){
		printf("Estoque abaixo do m�nimo\n");
	} else {
		printf("Estoque normal\n");
	}
}
