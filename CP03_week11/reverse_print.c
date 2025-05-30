#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(sizeof(int));
    int input;
    int count=0;

    while(1){ //infinite loop
        scanf("%d",&input);
        if(input == 0) break;

        arr = realloc(arr,sizeof(int)*(count+1));
        
        arr[count] = input;
        count++;
    }
    int i;
    for(i=count-1 ; i>=0 ; i--){
        printf("%d\n",arr[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
