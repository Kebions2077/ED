#include<stdio.h>

int po(int base,int expoent){
   if(base == 0){
    return 0;
   }
   if(base == 1 || expoent == 0){
    return 1;
   }

   else {
    return base * po(base,expoent-1);
   }
    
}
int main(void){
    int base,expoent,result;
    printf("Enter Base:\n");
    scanf("%i", &base);
    printf("Enter expoent:\n");
    scanf("%i",&expoent);
    result=po(base,expoent);
    system("cls");
    printf("----------\n");
    printf("%i^%i=%i\n",base,expoent,result);
    printf("----------\n");
    return 0;
}