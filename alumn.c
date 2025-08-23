#include <stdio.h>
#include <string.h>

struct classroom{
    char name[30];
    float median;
    int n1,n2,n3;
    long int alu_number;
};
    struct classroom person[4];
void database(void){
    int x;
    for(x=0;x<4;x++){
        printf("-----------------------------\n");
        printf("---Alumn %i---\n",x+1);
        printf("Enter Name:\n");
        scanf("%s",person[x].name);
        printf("Enter Your Number:\n");
        scanf("%li", &person[x].alu_number);
        printf("Enter the three notes:\n");
        scanf("%i %i %i",person[x].n1, person[x].n2, person[x].n3);
            person[x].median= (person[x].n1 + person[x].n2 + person[x].n3) / 3;

        printf("------------------------------\n");
    }
}
void show(void){
    int y;
   for(y=0;y<4;y++){
    printf("--------------------------------------\n");
    printf("--Alumn %i--\n",y+1);
    printf("Name:%s\n",person[y].name);
    printf("Number:%li",person[y].alu_number);
    printf("Median:%.2f",person[y].median);
    if(person[y].median >= 60){
        printf("Aprovado!!!!!\n");
    }
    printf("--------------------------------------\n");
}
}
int main(void){
    database();
    show();
    return 0;
}