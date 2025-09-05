#include<stdio.h>
int main(void){
    int variable;
    int *pointer;
    variable=4;
    pointer=&variable;
    printf("%i",*pointer);
    return 0;
}