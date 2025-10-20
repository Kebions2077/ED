/* Atividade semi­presencial 01 ­ Structs
Nome:Kevin N.Meireles
kevinmeireles.aluno@unipampa.edu.br */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 100
#define TEXT 80

struct loja{
    long int codigo;
    char descricao[TEXT],nome[TEXT];
    float valor;
};
struct loja produto[MAX];
void clear(void){
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
void cadastrar(void){
    //int *p=NULL;
    int x;
    //p=malloc(MAX*sizeof(int));
    //if(p==NULL){
    //    perror("1");
    //}
    printf("===================================================\n");
    printf("-----------------Cadastro De Produtos--------------\n");
    printf("Digite qualquer tecla para processeguir:\n");
    printf("---------------------------------------------------\n");
    system("pause");
    clear();
    for(x=0;x<MAX;x++){
    printf("----------\n");
    printf("Nome:\n");
    printf("----------\n");
    fflush(stdin);
    fgets(produto[x].nome,TEXT,stdin);
    clear();
    printf("----------\n");
    printf("Descrição:\n");
    printf("----------\n");
    clear();
    fflush(stdin);
    fgets(produto[x].descricao,TEXT,stdin);
    printf("----------\n");
    printf("Codigo:\n");
    printf("----------\n");
    scanf("%li",&produto[x].codigo);
    clear();
    printf("----------\n");
    printf("Valor\n");
    printf("----------\n");
    scanf("%f",&produto[x].valor);
    }
    clear();
    printf("-----------------------------\n");
    printf("Cadastro Completo!!!!\n");
    printf("----------------------------\n");
    system("pause");
}
void geral(void){
    int y,op = -1;
    clear();
    while(op!=0){
        printf("==============================================\n");
        printf("-----------------Menu Database---------\n");
        printf("1)Imprimir Todos os produtos\n");
        printf("2)Imprimir Um numero especifico\n");
        printf("3)Buscar por Codigo\n");
        printf("4)Busca por Nome\n");
        printf("5)Exportar Base\n");
        printf("0)Sair\n");
        printf("---------------------------------------\n");
        printf("==============================================\n");
        printf("Digite uma opção:\n");
        scanf("%i",&op);
        switch(op){
            default:
                printf("Erro 2");
            break;

            case 1: {
                float v_total = 0;
                clear();
                printf("------------Impressao Total--------------\n");
                for(y=0;y<MAX;y++){
                    printf("---Produto[%i]---\n",y+1);
                    printf("Nome:%s Codigo:%li Descricao:%s Valor:%.2f\n",produto[y].nome,produto[y].codigo,produto[y].descricao,produto[y].valor);
                    printf("------------------------\n");
                    v_total+= produto[y].valor;
                }
                printf("Valor do Montante de produtos:%.2f\n",v_total);
            }
            break;

            case 2: {
                int n, i;
                clear();
                printf("-------------Impressao Especifica--------------\n");
                printf("Digite o numero de itens que deseja imprimir:\n");
                scanf("%i",&n);
                clear();
                for(i=0;i<n;i++){
                    printf("---Produto[%i]---\n",i+1);
                    printf("Nome:%s Codigo:%li Descricao:%s Valor:%.2f\n",produto[i].nome,produto[i].codigo,produto[i].descricao,produto[i].valor);
                    printf("------------------------\n");
                }
            }
            break;

            case 3: {
                long int b_cod;
                clear();
                printf("---------Busca Codificada----------\n");
                printf("Digite o codigo do produto:\n");
                scanf("%li",&b_cod);
                clear();
                for(y=0;y<MAX;y++){
                    if(b_cod == produto[y].codigo){
                        printf("Nome:%s Codigo:%li Descricao:%s Valor:%.2f\n",produto[y].nome,produto[y].codigo,produto[y].descricao,produto[y].valor);
                    }
                }
                printf("-----------------------------------\n");
            }
            break;
            
            case 4: {
                int c[MAX];
                char b_nome[TEXT];
                clear();
                printf("------------Busca Nominal-----------\n");
                printf("Digite o nome do livro:\n");
                printf("------------------------------------\n");
                fflush(stdin);
                fgets(b_nome,TEXT,stdin);
                for(y=0;y<MAX;y++){
                    c[y]=strcmp(b_nome,produto[y].nome);
                    if(c[y]==0){
                        printf("------------------------------------------------\n");
                        printf("Nome:%s Codigo:%li Descricao:%s Valor:%.2f\n",produto[y].nome,produto[y].codigo,produto[y].descricao,produto[y].valor);
                        printf("------------------------------------------------\n");
                    }
                }
            }
            break;
                    
            case 5: {
                float v_total = 0;
                FILE* base;
                clear();
                printf("------------Exportar base------------\n");
                base = fopen("Lista_Produtos.txt", "w");
                if(base != NULL){
                    for(y=0;y<MAX;y++){
                        fprintf(base,"Nome:%s Codigo:%li Descricao:%s Valor:%.2f\n",produto[y].nome,produto[y].codigo,produto[y].descricao,produto[y].valor);    
                        v_total+= produto[y].valor;
                    }
                    fprintf(base, "Valor do montante de produtos:%.2f\n",v_total);
                    fclose(base);
                    printf("Base Exportada!!!\n");
                } else {
                    printf("Erro ao abrir arquivo!\n");
                }
            }
            break;
        }
    }
}

int main(void){
    cadastrar();
    geral();
    return 0;
}