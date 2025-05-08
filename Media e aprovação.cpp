//Biblioteca
#include <stdio.h>
#include <locale.h>

int main() {
//Inicio
    
    
	setlocale(LC_ALL,"");
	//Serve para setar a biblioteca, assim deixando voce colocar assentuação
	
	float n1, n2, res;
	//variavel que será usada para armazenar as duas notas do usuário e depois outra para fazer a media 
	
	printf("Digite sua primeira nota\n");
    scanf("%f", &n1);
    printf("Digite sua seguanda nota\n");
    scanf("%f", &n2);
    //mensagem que ira aparecer na tela do usuario para ele digitar a primeira e a segunda nota dele de 0 a 10
	
	res=(n1+n2/2.0);
    //res é usado para armazenar a media de aprovação do aluno
    
	if(7.0>=res<=0.0) {
	printf("voce esta APROVADO:\n");
	}
	else if (10.0>=res<=7.0) {
	printf("voce esta REPROVADO porque NAO ATINGIU A MEDIA:\n");
	}
	// o if e else são usados para confirmar se o aluno esta aprovado ou reprovado 
	
	return 0;
}