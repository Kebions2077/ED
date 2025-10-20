#include<stdio.h>
void sub  (int n){
    
    if(n==0){
        printf("[%i],",n);
    }
    else{
        printf("[%i],",n);
        sub(n-1);
    }
}
int main(void){
    int n;
    n=10;
    sub(n);
    return 0;
}