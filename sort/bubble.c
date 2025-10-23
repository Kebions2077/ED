#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* gen(int n, int *p){       
    p=malloc(n*(sizeof(int)));
    for(int i=0;i<n;i++){
        p[i]=rand()% 1000;
    }
    return p;
}

void sort (int n,int *p){
    int temp;
    for(int k=0;k<n-1;k++){
    for(int u=0;u<n-1-k;u++){
        if(p[u]>p[u+1]){
          temp=p[u];
          p[u]=p[u+1];
          p[u+1]=temp;

        }
    }
}

}
void show(int n,int *p){
    printf("------------------Array-------------------\n");
    for(int q=0;q<n;q++){
        printf("[%i]",p[q]);
    }
}

int main(void){
    srand(time(NULL));
    int n;
    int *p;
    p=NULL;
    printf("--------------------------\n");
    printf("Enter Array size:\n");
    scanf("%i",&n);
    printf("--------------------------\n");
    system("clear");
    p=gen(n,p);
    sort(n,p);
    show(n,p);
    return 0;

}