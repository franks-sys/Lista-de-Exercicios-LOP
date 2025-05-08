//Biblioteca
#include <stdio.h>
#include <locale.h>


int main() {
//Inicio

    int i;
    //variavel declarada para extrutura do for
    
    float n, soma = 0.0, media;
	//variaveis declaradas para guardar numemro fazer soma e a media
    
    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%f", &n); // Recebe o número digitado
        soma += n; // Soma os números e concatena
    }

  
    media = soma / 10;
	//equação para afzer a media
	

    printf("A média dos 10 números é: %.2f\n", media);
	//resultado impresso para o usuario
    return 0;
}
