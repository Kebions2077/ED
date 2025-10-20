#include <stdio.h>

void cal10(int n){
    if (n>10){
        return;
    }
    else {
        printf("[%i],", n);
        cal10(n+1);
    }
}
int main (void){
    int n;
    n=0;
    cal10(n);
    return 0;
}