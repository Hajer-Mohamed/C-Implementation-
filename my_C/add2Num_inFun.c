#include<stdint.h>
#include<stdio.h>
int add(int a, int b);

int main(){
    int x,y;
    scanf("%i",&x);
    scanf("%i",&y);
    int result=add(x,y);
    printf("the result of two numbers is %i\n",result);

    return 0;
}
int add(int a, int b){
    return a+b;
}