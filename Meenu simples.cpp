//Biblioteca
#include <stdio.h>

int main() {
 //Inicio
    
    int menu, n1, n2, res;
//variaveis usadas para guardar os numeros, escolha do menu, e o resultado das equações
    do {
 
        printf("[1] - Somar\n");
        printf("[2] - Subtrair\n");
        printf("[0] - Sair\n");
        printf("Escolha uma opcao ");
        scanf("%d", &menu);
		//menu impresso na tela do usuário
		
        switch(menu) {
            case 1:
                printf("informe dois numeros para somar: ");
                scanf("%d %d", &n1, &n2);
                res = n1 + n2;
                printf("Resultado da soma: %d\n", res);
                break;
            //formmula para fazer conta de adição
            case 2:
                printf("informe dois numeros para subtrair: ");
                scanf("%d %d", &n1, &n2);
                res = n1 - n2;
                printf("Resultado da subtracao:%d\n", res);
                break;
            //formula usada para fazer a conta de subtração
           	case 0:
				printf("Ate logo...\n");
				break;
			default:
				printf("Opcao Invalida! Tente Novamente\n");
			//formula usada para sair da programação
            
        }

    } while(menu != 0);
//usado para repetir a programação ate o usuario clicar 0 para sair
    return 0;
}
