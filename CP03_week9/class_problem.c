#include <stdio.h>
int main(void){
    int a[] = {0,1,2};
    int *pa[] = {&a[0], &a[1], &a[2]};
    int **ppa = pa;
    int i;
    for(i = 0 ; i<3 ; i++){
        printf("%d \n",**(ppa+i));
    }
}