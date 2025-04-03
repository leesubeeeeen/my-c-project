#include <stdio.h>
int main(){
    int num = 31;
    int *p = &num;

    printf("%p \n",p);
    printf("%p",p+1);
    return 1;
}