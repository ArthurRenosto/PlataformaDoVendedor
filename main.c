#include <stdio.h>
#include <string.h>

char clientes[100][100];
int total_clientes = 0;

void cadastrar_cliente(char nome[100]){

    strcpy(clientes[total_clientes], nome);
    total_clientes++;

}
void cadastrar_produtos(){

}
void listar_clientes() {
    printf("Lista de clientes:\n");
    for (int i = 0; i < total_clientes; i++) {
        printf("%d. %s\n", i + 1, clientes[i]);
    }
}



void castrar_venda(){
    printf("");
}


void menu(int opcao){
    if(opcao == 1){
        char nome_cliente[100];
        printf("Digite o nome do cliente\n::\t");
        scanf("%s", &nome_cliente);
        cadastrar_cliente(nome_cliente);
    }
    else if(opcao == 2){
        cadastrar_produtos();
    }else if(opcao == 3){
        listar_clientes();
    }else if(opcao == 4){
        castrar_venda();
    }else{
        printf("Opcao invalida, por favor tente novamente");
    }
}
void main(){
    int opcao;
    printf("Bem-Vindo ao Menu de vendas\nO que deseja fazer\n(1)Cadastrar um cliente\n(2)Cadastrar um produto\n(3)Lista clientes\n(4)Cadastrar uma venda\n\n::\t");
    scanf("%d", &opcao);
    menu(opcao);
}

