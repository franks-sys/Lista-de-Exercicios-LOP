//Biblioteca
#include <stdio.h>
#include <locale.h>


struct Pessoa {
    char nome[100];
    int idade;
	//funciona meio que um banco de dados
};


int main() {
    struct Pessoa p1, p2;

    // Leitura do nome e da idade da primeira pessoa 
    printf("informe o nome da primeira pessoa: ");
    scanf("%s", p1.nome);
    printf("Digite a idade de %s: ", p1.nome);
    scanf("%d", &p1.idade);
	// funçao que le o nome e da idade da primeira pessoa 
	
	

    printf("\ninforme o nome da segunda pessoa: ");
    scanf("%s", p2.nome);
    printf("Digite a idade de %s: ", p2.nome);
    scanf("%d", &p2.idade);
	// funçao que le o nome e da idade da segunda pessoa
	
	

    printf("\nResultado:\n");
    if (p1.idade > p2.idade) {
        printf("%s e mais velho(a).\n", p1.nome);
    } else if (p2.idade > p1.idade) {
        printf("%s e mais velho(a).\n", p2.nome);
    } else {
        printf("%s e %s tem a mesma idade.\n", p1.nome, p2.nome);
    }
	//função que comparar as idades
    return 0;
}
