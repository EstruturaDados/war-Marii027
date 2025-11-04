#include <stdio.h>
#include <string.h>

// Estrutura que representa um território
struct Territorio {
    char nome[30];  
    char cor[10];   
     int tropas;     
};

int main() {
    // Vetor de structs com 5 territórios
    struct Territorio territorios[5];

    printf("=== Cadastro de Territórios ===\n");

    // Laço para cadastrar os 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("\nCadastro do território %d:\n", i + 1);

        // Entrada do nome do território
        printf("Nome do território: ");
        fgets(territorios[i].nome, sizeof(territorios[i].nome), stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0'; 

        // Entrada da cor do exército
        printf("Cor do exército: ");
        fgets(territorios[i].cor, sizeof(territorios[i].cor), stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0'; 

        // Entrada do número de tropas
        printf("Número de tropas: ");
        scanf("%d", &territorios[i].tropas);

        getchar(); // limpa o buffer do teclado
    }

    // Exibição dos dados cadastrados
    printf("\n=== Territórios Cadastrados ===\n");

    for (int i = 0; i < 5; i++) {
        printf("\n-----------------------------------\n");
        printf("Território %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Número de Tropas: %d\n", territorios[i].tropas);
    }

    printf("\n-----------------------------------\n");
    printf("Cadastro concluído com sucesso!\n");

    return 0;
}