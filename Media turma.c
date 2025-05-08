//Biblioteca
#include <stdio.h>
#include <locale.h>

struct Aluno {
    char nome[30];
    float media;
    //funciona meio que um banco de dados
};

int main() {
    struct Aluno alunos[5];
    float soma = 0.0, mG;

    int i;


    for (i = 0; i < 5; i++) {
        printf("Digite o nome do %d aluno: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("INFORME a media final de %s: ", alunos[i].nome);
        scanf("%d", &alunos[i].media);

        soma += alunos[i].media;
        //resultado que concatena
        printf("\n");
    }
	//função de cadastro dos alunos
	

    mG = soma / 5.0;
    //função de calculo da media geral do


    printf("MEdia da turma: %.2f\n", mG);
	//resultado impresso na tela do usuario
    return 0;
}