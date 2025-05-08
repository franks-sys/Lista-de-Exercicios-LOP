//Biblioteca
#include <stdio.h>
#include <locale.h>


int main () {
//Inicio


	setlocale(LC_ALL,"");
	//Serve para setar a biblioteca, assim deixando voce colocar assentuação
	
	int n1, n2;
	//variavel declarada para guardar os numeros para descobrir se é impar ou não
	
	printf("Informe o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Informe o segundo numero:\n");
    scanf("%d", &n2);
    //onde aparece na tela do usuario para escrever o primeiro e o segundo numero e depois ler e guardar na variavel

	if(n1==n2) {
    printf("Os numeros são iguais");
	}
	else if(n1>n2) {
    printf("O maior numero e %d",n1);
	}
	else {
    printf("o menor numero e %d", n1);
	}
	//etapa usada para saber se o numero é maior que o outro e se por acaso ambos forem iguais ira aparecer na tela do usuario
	
	return 0;
}