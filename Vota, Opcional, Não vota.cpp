//Biblioteca
#include <stdio.h>

int main() {
//Inicio
    
	int n1;
	//variavel declarada para a partir da idade que o usuario colocar verificar se ele vota, não vota, ou se tem o voto opcional

    printf("Informe a sua  idade: ");
    scanf("%d", &n1);
	//a mensagem que ira aparecer na tela do usuario e onde o usuario ira digitar ele e armazenar no codigo
	
	
    if (n1 < 16) {
    printf("voce nao vota\n");
    
    } else if ((n1 >= 16 && n1 < 18) || n1 > 70) {
        printf("Voto opcional\n");
    } else {
        printf("Voto obrigatorio\n");
    }
	// esse if e else ira servir para saber se o voto de cada idade e obrigatorio, opcional, ou se a pessoa não vota
    
	return 0;
}