#include <stdio.h>

struct Aluno {
    char NMDA[100];
    int IDA;
    float NDA;
    //funciona meio que um banco de dados
};

int main() {
    struct Aluno al; // Declara um aluno

    
    printf("Informe o primeiro nome do aluno ");
    scanf("%s", al.NMDA);
	//pede o nome do aluno
	
    printf("Informe a idade do aluno: ");
    scanf("%d", &al.IDA);
	//pede a idade do aluno
	
    printf("INforme a nota do aluno: ");
    scanf("%f", &al.NDA);
	//pede a idade do aluno
	
		

    printf("\nDados do aluno:\n");
    printf("Nome: %s\n", al.NMDA);
    printf("Idade: %d\n", al.IDA);
    printf("Nota: %.2f\n", al.NDA);
	//saida impressa para o usuario
    return 0;
}
