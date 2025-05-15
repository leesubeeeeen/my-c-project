#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[5][5];
    int (*ptr) = a[5];
    int i,j;

    for(i=0 ; i<5 ; i++){
        for(j=0 ; j<5 ; j++){
            scanf("%d ",((ptr+i)+j));
        }
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
