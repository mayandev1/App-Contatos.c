#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "modulo.c"

struct Contato{
    char nome[100];
    char telefone[20];
    char email[100];
};

int main(){
    struct Contato contatos[100];
    int opcao, numContatos = 0;
    char nome[100];

    do{
        menuPrincipal();
        scanf("%d", &opcao);
        getchar();
        
        switch (opcao){
        case 1:
            printf("Digite o nome do contato:\n");
            fgets(contatos[numContatos].nome, 100, stdin);
            removerNovalinha(contatos[numContatos].nome);
            printf("Digite o telefone:\n");
            fgets(contatos[numContatos].telefone, 100, stdin);
            removerNovalinha(contatos[numContatos].telefone);
            printf("Digite o email do contato:\n");
            fgets(contatos[numContatos].email, 100, stdin);
            removerNovalinha(contatos[numContatos].email);
            numContatos++;
            menu2();
            getchar();   
            break;
        case 2:
            limparTela();
            printf("+------------------------------------------+\n");
            printf("|            Contatos Salvos: %d            |\n", numContatos);

            for (int i = 0; i < numContatos; i++){
                printf("+------------------------------------------+\n");
                printf("| Nome: %s |\n", contatos[i].nome);
                printf("| Telefone: %s |\n", contatos[i].telefone);  
                printf("| Email: %s |\n", contatos[i].email);    
                printf("+------------------------------------------+\n");

            }
            printf("\nDigite (Enter) para continuar...");
            getchar();
            break;
        case 3:
            printf("Digite o nome do contato que deseja editar:\n");
            fgets(nome, 100, stdin);    
            removerNovalinha(nome);    

            for (int i = 0; i < numContatos; i++){
                if(strcmp(contatos[i].nome, nome) == 0){
                    printf("Digite o novo nome do contato:\n");
                    fgets(contatos[i].nome, 100, stdin);
                    removerNovalinha(contatos[i].nome);

                    printf("Digite o novo telefone do contato:\n");
                    fgets(contatos[i].telefone, 100, stdin);
                    removerNovalinha(contatos[i].telefone);

                    printf("Digite o novo email do contato:\n");
                    fgets(contatos[i].email, 100, stdin);
                    removerNovalinha(contatos[i].email);
                }
                menu3();
                getchar();
            }   
            break;
        case 4:
            printf("Digite o nome do contato que deseja editar:\n");
            fgets(nome, 100, stdin);    
            removerNovalinha(nome);    

            for (int i = 0; i < numContatos; i++){
                if(strcmp(contatos[i].nome, nome) == 0){
                    for (int j = i; j < numContatos - 1; j++){
                        contatos[j] = contatos[j + 1];
                    }
                    numContatos --;
                }
            }
            menu4();
            getchar();
            break;
        case 5:
            printf("Encerrando o programa...\n");
            break;
        default:
            printf("Opcao Invalida!\n");
            break;
        }
    } while (opcao != 5);
    
    return 0;
}