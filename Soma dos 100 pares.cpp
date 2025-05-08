//Biblioteca
#include <stdio.h>

int main() {
//Inicio
    
	int soma, i;
	//variavel utilizada para somar os numeros pares
    
	soma = 0;
    //atribuir o valor inicial da variavel para não pegar "sujeira"
    
    for (i = 2; i <= 200; i += 2) {
        soma += i;
        //estrutura usada para concatenar a soma
    }
	//estrutura para azer a soma dos 100 numeros pares
	
    printf("A soma dos 100 primeiros numeros pares e: %d\n", soma);

    return 0;
}