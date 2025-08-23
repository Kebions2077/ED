#include <string.h>
#include <stdio.h>

struct data{
    char address[30], name[30];
    
};
   
int main (void){
    struct data st1;
    struct data st2;
   
    printf("Enter Name:\n");
    fgets(st1.name,30,stdin);
    printf("Enter Adress:\n");
    fgets(st1.address,30,stdin);
    
    st2=st1;
    
    system("cls");
    
    printf("---Second Struct---\n");
    printf("Name:%s\n",st2.name);
    printf("Adress:%s\n",st2.address);
    printf("-------------------\n");
    
    return 0;
}