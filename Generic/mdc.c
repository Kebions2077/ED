#include<stdio.h>
int mdc(int a,int b){
    if( a%b == 0){
        return b;
    }
    else{
        return mdc(b,a%b);
    }
}
int main(void){
    int a,b,c;
    printf("Enter the first Number:\n");
    scanf("%i",&a);
    printf("Enter the Second Number:\n");
    scanf("%i",&b);
    c=mdc(a,b);
    printf("Result:%i",c);
    return 0;
}