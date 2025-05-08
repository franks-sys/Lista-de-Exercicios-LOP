#include <stdio.h>

struct Aluno {
    char nome[30];
    float n1, n2, n3;
    //funciona meio que um banco de dados
};

int main() {
//Inicio

    struct Aluno al;
    float media;
	//variavel usada para fazer a media
	
   
    printf("Digite o nome do aluno: ");
    scanf("%s", al.nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &al.n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &al.n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &al.n3);
	//essa parte do programa ira ler todos os dados inseridos do aluno
	
    
    media = (al.n1 + al.n2 + al.n3)/3;
	//calclula da media do aluno
	
	
    
    printf("\nAluno: %s\n", al.nome);
    printf("Media: %.2f\n", media);

    if (media >= 7.0) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
	//resultado que sera impresso na tela do usuario
    return 0;
}
