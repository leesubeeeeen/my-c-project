#include <stdio.h>
int main(){
    int num = 365;
    int * ptr1 = &num;
    printf("%p",ptr1);
    return 0;
}