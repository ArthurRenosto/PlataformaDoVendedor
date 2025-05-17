#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int clientes_listados, clientes_cadastrados, produtos_cadastrados;
char clientes[10][50];
char produtos[10][40];

 void listar_clientes() {
    for (int i = 0; i < clientes_cadastrados; i++) {
        printf(":: %s\n", clientes[i]);
    }
}
void cadastrar_clientes(){
    printf("Insira o cliente::\t");
    scanf("%s", clientes[clientes_cadastrados]);
    clientes_cadastrados++;
    printf("cliente adicionado");
}

void adicionar_produtos(){
    printf("Insira o produto::\t");
    scanf("%s", produtos[produtos_cadastrados]);
    produtos_cadastrados++;
}

void listar_produtos(){
for (int i=0; i < produtos_cadastrados; i++)
    printf(":: %s\n", produtos[i]);

}


int menu()
{
    int option;
    do{
    printf("BEM VINDO AO PAINEL DO VENDEDOR:\n1) Cadastrar um cliente\n2) Cadastrar um produto\n3) Realizar uma venda\n4) Listar clientes\n5) Listar produtos\n6) Listar vendas\n0) Sair\n\n::\t");
    scanf("%d", &option);
    
    if (option == 1){
        cadastrar_clientes();
    }
    else if(option == 2){
        cadastrar_produtos();
    }
    else if (option == 3){
        \\fazer
    }
    else if (option == 4){
        listar_clientes();
    }
    else if (option == 5){
        listar_produtos();
    } 
    else if (option== 6){
      \\fazer
    }
    else if(option == 0){
    }
    } while(option > 0);


    return 0;
}

int main(){
    menu();
return 0;
}
