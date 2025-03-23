#include<stdio.h>
// void print_name(void);
// int main(){
//     printf("Hello my friends\n");
//     print_name();

//     return 0;
// }
// //no return , no get variables , just print 
// void print_name(void){
//     printf("Hello, World!\n");
// } 

// scope
//local variable 
// void func(void);
// int main(){
//     int x=10;       //local variable , available in this block of code (this function) only
//     func();
//     printf("x value =%i\n",x);
// }
// void func(void) 
// {
//     int x=20;       //local variable , available in this block of code (this function) only
//     printf("iam a void function\n");
//     x++;
// }

//global variable 
void func(void);
int x=0;            //global variable , can access it at any part of code
int main(){
    x=10;       
    func();
    printf("x value =%i\n",x);
}
void func(void) 
{
    x=20;       
    printf("iam a void function\n");
    x++;
}