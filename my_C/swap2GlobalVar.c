#include <stdio.h>
void swap_2num(void);
int x=7;
int y=9;
int main(){
    swap_2num();
    return 0;
}
void swap_2num(void){
    int z=x;
    x=y;
    y=z;
    printf("x= %d\ny= %d\n",x,y);
}