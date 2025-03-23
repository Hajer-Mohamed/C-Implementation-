#include <stdio.h>
int max_num(int a,int b) ;
int main() {
   int num1 , num2;
   scanf("%i",&num1);
   scanf("%i",&num2);
   int maxx=max_num(num1,num2);
   printf("the maximum number of two numbers is: %d\n",maxx);
   return 0;
}
int max_num(int a,int b) {
   if(a>=b){
      return a;
   }
   else{
      return b;
   }
}
