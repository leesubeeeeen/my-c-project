#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    unsigned int N;
    scanf("%d",&N);

    int rotation = N%4;

    int arr[5][5];
    int i,j;
    
    for(i=0 ; i<5 ; i++){
        for(j=0 ; j<5 ; j++){
            scanf("%d ",&arr[i][j]);
        }
    }

    if(rotation == 0){
        for(i=0 ; i<5 ; i++){
            for(j=0 ; j<5 ; j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    else if(rotation == 1){
        for(i=0 ; i<5 ; i++){
            for(j=4 ; j>=0 ; j--){
                printf("%d ",arr[j][i]);
            }
            printf("\n");
        }
    }
    else if(rotation ==2){
        for(i=4 ; i>=0 ; i--){
            for(j=4 ; j>=0 ; j--){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    }
    else{ //rotation == 3
        for(i=4 ; i>=0 ; i--){
            for(j=0 ; j<5 ; j++){
                printf("%d ",arr[j][i]);
            }
            printf("\n");
        }
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
