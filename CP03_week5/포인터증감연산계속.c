#include <stdio.h>
int main(){
    int arr[] = {31, 12, 365};
    int *p = arr;

    printf("%p \n",p);
    printf("%p \n",p+1);
    printf("%p \n",p+2);
    printf("%p \n",p-1);

    return 0;
}