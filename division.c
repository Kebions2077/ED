#include <stdio.h>
float div(int a,int b){
    if ((a-b)<b){
        return 1;
    }
    else {
        return (a-b,b)+1;
    }
}
int main(void){
    int a,b;
    float result;
    printf("enter the first number:\n");
    scanf("%i",&a);
    printf("enter the second number:\n");
    scanf("%i",&b);
    result=div(a,b);
    printf("Result:%.2f\n",result);
    return 0;
}