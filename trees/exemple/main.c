#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


int main(void){
node *root=NULL;
int op,int x;
op=x=0;
  while(op!=6){
    printf("---------------Binary Search Tree------------------\n");
    printf("1)Add\n3)Show\n4)Crescent\n5)Descrescent\n6)Exit");
    printf("---------------------------------------------------\n");
    printf("Enter An Option:\n");
    scanf("%i",&op);
    switch(op){
      case 1:
        printf("----------Add-----------\n");
      printf("Enter a number to add");
      scanf("%i",&x);
      ins(root,x);
      break;
      case 2:
        crescent(root)
      
}
