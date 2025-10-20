#include <stdio.h>
int cal_fat(int n){
    if(n==1){
        return 1;
    }
    else{
        return n * cal_fat(n-1);
    }
}
int main(void){
    int n,result;
    printf("Enter the Number you want to fatorate:\n");
    scanf("%i",&n);
    result=cal_fat(n);
    printf("Result:%i",result);
    return 0;
}