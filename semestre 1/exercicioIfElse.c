#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localização por meio de "setlocale()"

//temperatura
//umidade
//nível de estoque

int main(){
	setlocale(LC_ALL, "");
	
	float temperatura, umidade;
	unsigned int nivelDeEstoque, estoqueMinimo = 1000; //unsigned pois o estoque sempre será positivo (desloca o intervalo de números para apenas positivos)
	
	printf("Entre com a temperatura: \n");
	scanf("%f", &temperatura);
	
	printf("Entre com a umidade: \n");
	scanf("%f", &umidade);
	
	printf("Entre com o estoque: \n");
	scanf("%d", &nivelDeEstoque);
	
	if( temperatura > 30){
		printf("Temperatura está alta\n");
	} else {
		printf("Temperatura está dentro dos parâmetros\n");
	}
	
	if( umidade > 50){
		printf("Umidade elevada\n");
	} else {
		printf("Umidade está dentro dos parâmetros\n");
	}
	
	if( nivelDeEstoque < estoqueMinimo){
		printf("Estoque abaixo do mínimo\n");
	} else {
		printf("Estoque normal\n");
	}
}
