//Biblioteca
#include <stdio.h>

int main() {
//Inicio
  
    int n1, fat, i;
 	//variavel atribuida para o numero a receber fatorial, o fatorial, e para a extrutura do for
 	
	 fat = 1;
 	//valor inicial do fatorial
    
    printf("informe um numero inteiro positivo: ");
    scanf("%d", &n1);
//pede o numero positivo para o usuario e o armazena

    if (n1 < 0) {
        printf("Fatorial não funciona com numeros negativos.\n");
    }
	//se o numero for menor que zero não ira funcionar por que é negativo
	else {
        for (i = 1; i <= n1; i++) {
            fat *= i;
        }
	//extrutura do for para fazer o fatorial
       
	    printf("Fatorial de %d é: %d\n", n1, fat);
    }
//resultado impresso na tela do usuario
    return 0;
}