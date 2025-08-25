#include <stdio.h>
#include <locale.h>	//biblioteca que permite configurar localiza��o por meio de "setlocale()"

int main(){
	setlocale(LC_ALL, "");
	
	int opcao;
	float nota1, nota2, media;
	
	printf("Menu de Gerenciamento de Estudantes\n");
	printf("1 - Calcular M�dia\n");
	printf("2 - Determinar Status\n");
	printf("3 - Sair\n");
	printf("Escolha uma op��o: ");
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			printf("\n\n### Calcular a M�dia ###\n\n");
			printf("Insira a primeira nota: ");
			scanf("%f", &nota1);
			printf("Insira a segunda nota: ");
			scanf("%f", &nota2);	
			
			//verifica se a entrada � v�lida para o intervalo de 0 a 10
			if((nota1 >= 0 && nota1 <=10) && (nota2 >= 0 && nota2 <=10)){
				printf("Entrada correta\n");
				media = (nota1 + nota2) / 2;
				printf("A m�dia das notas � %.2f", media);
			} else {
				printf("Insira valores v�lidos entre 0 e 10");
			}
		break;
		case 2:
			printf("\n\n### Determinar Status ###\n\n");
			printf("Entre com a m�dia: ");
			scanf("%f", &media);
			//media >=5 ? printf("Aprovado!") : printf("Reprovado");
			
			if (media >= 7){
				printf("Aprovado!\n");
			} else if (media >= 5){
				printf("Recupera��o\n");
			} else {
				printf("Reprovado!\n");
			}
		break;
		case 3:
			printf("Saindo do Programa...\n");
		break;
		default:
			printf("Selecione uma op��o v�lida");
		break;
	}
	
	return 0;
}
