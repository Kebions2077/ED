#include <stdio.h>
int fi(int pos){
    if(pos==1 || pos==2){
        return 1;
    }
    else {
        return fi(pos - 1) + fi(pos-2);
    }
}
int main (void){
    int pos,r;
    printf("Enter the position of fibonacci that you want to calculate:\n");
    scanf("%i",&pos);
    r=fi(pos);
    printf("Result:%i",r);
    return 0;
}