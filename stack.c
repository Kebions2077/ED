#include <stdio.h>
#include <stdlib.h>


#define MAX 4
int stack[MAX];
int top=-1;

void push(int value){
    if (top==MAX-1){
        printf("Stack Overflow\n");
}
    else{
        top++;
        stack[top]=value;
        printf("Adicionado:[%i]\n",value);
    }
}
int pop(void){
    if (top==-1){
        printf("Stack Underflow\n");
        
    }
    else {
        int value=stack[top];
        printf("Removido:[%i]\n",stack[top]);
        top --;
        return stack[top];

    }
}