#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Nota{
    char titulo[100];
    char conteudo[100];
};

void limparTela(){
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");
    #endif
}

int main(){
    struct Nota notas[100];
    int opcao, numNotas = 0;

    do{
        limparTela();
        printf("Selecione uma opcao:\n");
        printf("1- Adicionar notas:\n");
        printf("2- Vizualizar notas:\n");
        printf("3- Editar nota:\n");
        printf("4- Excluir nota:\n");
        printf("5- Sair:\n");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            printf("Digite o titulo da nota:\n");
            scanf("%s", notas[numNotas].titulo);
            printf("Digite o conteudo da nota:\n");
            scanf("%s", notas[numNotas].conteudo);
            numNotas++;
            printf("Nota adicionada com sucesso!\n");
            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opcao Invalida!\n");
            break;
        }
    } while (opcao != 5);
    
}