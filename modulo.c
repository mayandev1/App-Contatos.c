#include <stdio.h>
#include "modulo.h"

void limparTela(){
    #ifdef _WIN32
        system("cls");
    #else 
        system("clear");
    #endif
}

void removerNovalinha(char *str){
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n'){
        str[len - 1] = '\0';
    }
}

void menuPrincipal(){
    limparTela();
    printf("+---------------------------------------+\n");
    printf("|           MENU DE CONTATOS            |\n");
    printf("+---------------------------------------+\n");
    printf("| 1 - Adicionar contato                 |\n");
    printf("| 2 - Visualizar contatos               |\n");
    printf("| 3 - Editar contato                    |\n");
    printf("| 4 - Excluir contato                   |\n");
    printf("| 5 - Sair                              |\n");
    printf("+---------------------------------------+\n");
    printf("Digite sua opcao: ");
}            

void menu2(){
    limparTela();
    printf("|-----------------------------------|\n");
    printf("| Contato adicionado com sucesso!   |\n");
    printf("| Digite (Enter) para continuar...  |\n");
    printf("|-----------------------------------|\n");
}

void menu3(){
    limparTela();
    printf("|-----------------------------------|\n");
    printf("| Contado editado com sucesso!      |\n");
    printf("| Digite (Enter) para continuar...  |\n");
    printf("|-----------------------------------|\n");
}

void menu4(){
    limparTela();
    printf("|-----------------------------------|\n");
    printf("| Contado excluido com sucesso!     |\n");
    printf("| Digite (Enter) para continuar...  |\n");
    printf("|-----------------------------------|\n");
}