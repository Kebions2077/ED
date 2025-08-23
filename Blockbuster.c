#include <stdio.h>
#include <string.h>
struct blockbuster{
    char name[30],gender[30],country[30];
    int year,min;
    float note,price,hour;
};
    struct blockbuster movie;
void database(void){
    system("cls");
    printf("---Create Movie Info---\n");
    fflush(stdin);
    printf("Name:\n");
    fgets(movie.name,30,stdin);
    fflush(stdin);
    printf("Gender:\n");
    fgets(movie.gender,30,stdin);
    fflush(stdin);
    printf("Country:\n");
    fgets(movie.country,30,stdin);
    fflush(stdin);
    printf("Year:\n");
    scanf("%i",& movie.year);
    printf("Duration in Minutes:\n");
    scanf("%i",& movie.min);
    movie.hour= (movie.min)/60.00f;
    printf("Critic Note:\n");
    scanf("%f",& movie.note);
    printf("Location Price:\n");
    scanf("%f",& movie.price);
    printf("--------------------------\n");
system("cls");
}
void show(void){
    printf("-----Movie Info-----\n");
    printf("Name:\n",movie.name);
    printf("Gender:\n",movie.gender);
    printf("Country:\n",movie.country);
    printf("Year:\n",movie.year);
    printf("Duration= Min:%i, Hours:%.2f\n",movie.min,movie.hour);
    printf("Critic Note:%.2f\n",movie.note);
    printf("Location Price:U$%.2f\n",movie.price);
    printf("--------------------------\n");

}
int main(void){
    int op;
    printf("-----------MENU----------\n");
    printf("1)Enter a Movie in Database:\n");
    printf("2)Show Movie Database\n");
    printf("------------------------------\n");
    printf("Select an option:\n");
    scanf("%i",&op);
    switch(op){
        default:
            printf("Invalid Option!!");
            break;
        case 1:
        database();
        show();
        break;
        case 2:
            printf("Empty Database\n");
            break;
    }
    return 0;
    
}