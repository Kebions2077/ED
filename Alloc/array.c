#include <stdio.h>
int sum(int vet[6],int cmp){
if(cmp==6){
    return 0 ;
}
else{
    return vet[cmp] +sum(vet,cmp+1);
}
    
}
int main(void){
    int vet[6]={1,2,3,4,5,6},s,cmp;
    cmp=0;
    s=sum(vet,cmp);
    printf("Result:%i",s);
    return 0;

}