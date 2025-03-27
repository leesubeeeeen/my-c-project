#include <stdio.h>
int main(){
    char a[] = {100,200};
    int min = -1;

    if(sizeof(a)>min)
        printf("The first element is %d\n",a[0]);
    else
        printf("TOO SMALL ARRAY!! \n");
    return 0;    
}