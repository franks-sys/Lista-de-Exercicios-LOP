//Biblioteca
#include <stdio.h>
#include <locale.h>


int main() {
//Inicio

	
	setlocale(LC_ALL,"");
	//Serve para setar a biblioteca, assim deixando voce colocar assentuação

    int i;
    //variavel declarada para extrutura do for

    int n, maior, menor;
	//variaveis declaradas para guardar os numeros digitados pelo usuario e mostrar quais são a maior e o menor

   
    printf("informe o primeiro numero: ");
    scanf("%d", &n);
    maior = n;
    menor = n;

    
    for (i = 2; i <= 10; i++) {
        printf("Digite o proximo numero: ", i);
        scanf("%d", &n); // Recebe o número do usuario

        
        if (n > maior) {
            maior = n;
        }

        if (n < menor) {
            menor = n; 
        }
    }
	//condição declarada para descobrir qual é o maior numero e quanl e o menor
    
    printf("O maior numero e %d\n", maior);
    printf("O menor numero e %d\n", menor);
	// parte que exibe o maior e menor número pro usuário
    return 0;
}
