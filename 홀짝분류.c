#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int int_arr[10];
    int even_idx = 0;
    int even_arr[10];
    int odd_arr[10];
    int odd_idx = 0;
    int idx = 0;
    
    while(idx<10){
        scanf("%d ",&int_arr[idx]);
        idx++;
    }
    for(int i = 0 ; i<10 ; i++){
        if(int_arr[i] % 2 == 0){
            even_arr[even_idx] = int_arr[i];
            even_idx++;
        }
        else{
            odd_arr[odd_idx] = int_arr[i];
            odd_idx++;
        }
    }

    for(int i = 0 ; i<odd_idx ; i++){
        printf("%d ",odd_arr[i]);
    }
    if(odd_idx != 0){
        printf("\n");
    }
    
    for(int i = 0 ; i<even_idx ; i++){
        printf("%d ",even_arr[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
