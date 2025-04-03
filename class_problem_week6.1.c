#include <stdio.h>
int a[] = {0,1,2,3,4};
int main(){
    int i, *p;
    p=a;

    for(i = 0 ; i<=4 ; i++) printf("%d \n",a[i]);
    for(i = 0 ; i<=4 ; i++) printf("%d \n",p[i]);
    
    return 1;
}