//Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
//Inicio
	
	setlocale(LC_ALL,"");
	//Serve para setar a biblioteca, assim deixando voce colocar assentuação
	
	int opcao;
	//variavel utilizada para guardar as informações do menu
	float num1, num2, resultado;
	//variavel usada em floar para armazenar os resultado dos calculos da calculadora
		
	do //Inicio do While
	{
		printf("\n---Calculadora Simples---\n");
		printf("[1]- Adicao\n");
    	printf("[2]- Subtracao\n");		
		printf("[3]- Multiplicacao\n");	
		printf("[4]- Divisao\n");
		printf("[0]- Sair\n");
		printf("Escolha uma opcao\n");
		scanf("%d",&opcao);
		//um menu que ira aparecer na tela do usuario
		
		
		switch(opcao){
			case 1:
				printf("DIgite dois numeros:");
				scanf("%f" "%f",&num1, &num2);
				resultado = num1 + num2;
				printf("Resultadp: %.2f \n", resultado);
				break;
			//onde sera feita as contas de adição caso o usuario escolher 1
			case 2:
				printf("DIgite dois numeros:");
				scanf("%f" "%f",&num1, &num2);
				resultado = num1 - num2;
				printf("Resultadp: %.2f \n", resultado);
				break;
			//onde sera feita as contas de subtração caso o usuario escolher 2
			case 3:
				printf("DIgite dois numeros:");
				scanf("%f" "%f",&num1, &num2);
				resultado = num1 * num2;
				printf("Resultadp: %.2f \n", resultado);
				break;
			//onde sera feita as contas de multiplicação caso o usuario escolher 3
			case 4:
				printf("DIgite dois numeros:");
				scanf("%f" "%f",&num1, &num2);
				if (num2 != 0){
					resultado = num1 / num2;
					printf("Resultadp: %.2f \n", resultado);
				}
				else {
					printf("Erro: divisao por 0\n");
				}
				break;
			//onde sera feita as contas de divisão caso o usuario escolher 4, porem ser escollher zero como divisor irá dar erro
			case 0:
				printf("Ate logo...\n");
				break;
			default:
				printf("Opcao Invalida! Tente Novamente\n");
			//caso o usuario escolher 0 ele ira sair do codigo
		}
		
			printf("\nPressione [ENTER} Para continuar\n");
			getchar(); //Funciona como scanf
			getchar(); //Aguarda o Enter do usuario
			//serve para parar o codigo
			
			system("cls");
			//serve para limpar
			
	}while (opcao != 0);
	//caso atende esse quesito o codigo para
	
	return 0;
	
}