#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct person{
    char name[30],password[30];
    short int age;
    long int phone;
};
struct person user;
void erase() {
    #ifdef _WIN32
        system("cls");  
    #else
        system("clear");
    #endif
}

void cadastrar(void){
    printf("--------------------------------------\n");
    printf("---------------Cadastro--------------\n");
    printf("Digite o seu nome:\n");
        fflush(stdin);
    fgets(user.name,30,stdin);
    printf("Digite a sua idade:\n");
    scanf("%hi",&user.age);
    printf("Digite seu telefone:\n");
    scanf("%li",& user.phone);
        fflush(stdin);
    printf("Digite a sua senha:\n");
    fgets(user.password,30,stdin);
    printf("--------------------------------------\n");
    printf("----------------------------------------\n");

}
void login(void){
    char t_nome[30],t_senha[30],n,s;
    printf("------------Login-------------\n");
    printf("Digite o nome de usuario:\n");
    fflush (stdin);
    fgets(t_nome,30,stdin);
    clear();
    printf("Digite a sua senha:\n");
    fflush(stdin);
    fgets(t_senha,30,stdin);
    n=strcmp(t_nome,user.name);
    s=strcmp(t_senha,user.password);
    if(n != 0 || s != 0){
        printf("Dados errados:\n");
    }
    else{
        printf("Login Bem-Sucedido:\n");
    }
}
int main(){
    cadastrar();
    erase();
    login();
    return 0;
}