#include <stdio.h>

struct Produto {
    char nome[30];
    float preco;
    int quantidade;
    //funciona meio que um banco de dados
};

int main() {
    struct Produto produtos[5]; 
    //variavel do struct
    
	int i;
	//variavel declarada para extrutura do for
    
    for (i = 0; i < 5; i++) {
        printf("Digite o nome do %d produto: ", i + 1);
        scanf("%s", produtos[i].nome); 
        printf("Digite o preco do produto: ");
        scanf("%f", &produtos[i].preco);

        printf("Digite a quantidade do produto: ");
        scanf("%d", &produtos[i].quantidade);
        printf("\n");
    }
	//funçao que registra os 5 produtos e armazaena no codigo
	
    
    printf("  Lista de Produtos \n");
    for (i = 0; i < 5; i++) {
        float total = produtos[i].preco * produtos[i].quantidade;
        printf("%dº Produto: %s\n", i + 1, produtos[i].nome);
        printf("Preco: R$ %.2f | Quantidade: %d | Total: R$ %.2f\n\n",
               produtos[i].preco, produtos[i].quantidade, total);
    }
	//faz a conta e exibe os resultados corretos
    return 0;
}

  