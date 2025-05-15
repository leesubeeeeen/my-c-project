#include <stdio.h>
    void init_zero(int *x);
    int main(void){
        int x = 3;
        printf("%d\n",x);
        init_zero(&x);
        printf("%d\n",x);
        return 0;
    }
    void init_zero(int *x){
        *x = 0;
    }