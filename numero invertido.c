//Biblioteca
#include <stdio.h>
#include <locale.h>


int main() {
//Inicio

	
	setlocale(LC_ALL,"");
	//Serve para setar a biblioteca, assim deixando voce colocar assentuação

    int numeros[5], i;
	//variavel usada para guardarc os 5 numeros e outra para a estrutura do for
	
    
    printf("Digite 5 numeros:\n");
    for (i = 0; i < 5; i++)
	//função que le os 5 os numeros
	 {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]); // Recebe os números inseridos pelo usuario
    }

    
    printf("invertido: ");
    for (i = 4; i >= 0; i--) {
        printf("%d ", numeros[i]); 
    }
    //extrutura que exibe os numeros invertidos para o usuario

    return 0;
}

