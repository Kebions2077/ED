#include <stdio.h>
#include <stdlib.h>
#include "tree.h"


int main(void){
node *root=NULL;
ins(root,10);
ins(root,9);
ins(root,20);
show(root);
return 0;
}