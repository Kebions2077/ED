#include <stdio.h>
int main(void){
    int *pointer;
    int a;
    printf("Enter The Value:\n");
    scanf("%i",&a);
    pointer=&a;
    printf("Value of the pointer:%i",*pointer);
    return 0;
}