//Biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
//Inicio

	setlocale(LC_ALL,"");
	//Serve para setar a biblioteca, assim deixando voce colocar assentuação

	int n, i, tabuada;
	//variaveis ultilizadas para armazenar numero escolhido, variavel para funcionamento d o for, e para fazer o funcionamento da tabuada
	
	printf("Digite um numero para realizar a tabuada");
	scanf("%d", &n);
	//mensagem que ira aparecer na tela do usuario e scanf para armazenar a resposta
	
	printf("O numero escolhido foi %d\n", n);
	for (i=0;i<=10;i++)
	//extrutura para a produção da tabuada
	{
		printf("%d X %d = %d\n",n,i,tabuada = n*i);
	}
	//resutado impresso parao usuário
	
	return 0;	
}