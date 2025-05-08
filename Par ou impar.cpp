//Biblioteca
#include <stdio.h>
#include <locale.h>

int main () {
//Inicio
	setlocale(LC_ALL,"");
	//Serve para setar a biblioteca, assim deixando voce colocar assentuação
	
	int n1;
	//Variavel que sera ultilizada para que o usuário confirme se é impar ou par
	
	printf("Informe o numero que voce quer descobrir:\n");
    scanf("%d", &n1);
    //na linha 13 é o que ira aparecer na tela do o usuário e a 14 é onde o sistema lerá a resposta e depois armazena-la
    
	if(n1 % 2 == 0) {
    printf("Seu numero e par");
	}
	else {
    printf("seu numero e impar");
	}
	//o if e else servem para provar se é oou não é par o numero e posteriormente enviará a resposta para o usuário
	
	return 0;
	
}