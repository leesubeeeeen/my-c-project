#include <stdio.h>
int main(void){
    
    /*
    int num = 5;
    const int * ptr = &num;
    //*ptr = 50;
    num = 60; //num을 통해 바꾸는건 가능
    */

    /*
    const int num = 5;
    printf("%d\n",num);
    int *ptr = &num;
    *ptr = 50;
    printf("%d",num);
    */

    const int num1 = 5;
    const int num2 = 10;
    const int *ptr = &num1;

    printf("%p\n",ptr);
    
    ptr = &num2;

    printf("%p",ptr);


}