//Biblioteca
#include <stdio.h>
#include <locale.h>


int main() {
//Inicio

	
	setlocale(LC_ALL,"");
	//Serve para setar a biblioteca, assim deixando voce colocar assentuação

    int i, n, pares = 0;
	//variaveis decraradas para extrutura do for, guardar o numero e guardar os numeros pares
	
    
    for (i = 1; i <= 10; i++) {
       //for para ler os 10 numeros 
       
	    printf("Digite o %d numero: ", i);// resultado que é impresso na tela do usuario
        scanf("%d", &n); // Recebe o número

        
        if (n % 2 == 0)
		//condição para conferir se o numero é par
		 {
            pares++; // função que incrementa o contador de números pares
        }
    }

    
    printf("Quantidade de numeros pares: %d\n", pares);
	//resultado impresso na tela do usuario 
    return 0;
}
