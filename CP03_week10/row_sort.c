#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,M;
    scanf("%d %d",&N,&M);
    int arr[N][M];
    
    int (*ptr)[M];
    ptr = arr;
    int i,j;
    
    for(i=0 ; i<N ; i++){
        for(j=0 ; j<M ; j++){
            scanf("%d ",&ptr[i][j]);
        }
    }
    
    int sum;
    int avg_arr[N];
    int (*aptr) = avg_arr;
    
    for(i=0 ; i<N ; i++){
        for(j=0 ; j<M ; j++){
            sum+=ptr[i][j];
        }
        aptr[i] = sum;
        sum=0;
    }
    int result[N];
    int (*rptr) = result;
    
    for(i=0 ; i<N ; i++){
        rptr[i] = i;
    }
    for(i = 0; i < N - 1; i++) {
        for(j = 0; j < N - 1 - i; j++) {
            if(aptr[j] > aptr[j+1]) {//swap
                int temp = rptr[j];
                rptr[j] = rptr[j+1];
                rptr[j+1] = temp;
                
                int tmp = aptr[j];
                aptr[j] = aptr[j+1];
                aptr[j+1] = tmp;
            }
        }
    }

    
    int row;
    for(i=0 ; i<N ; i++){
        row = rptr[i];
        for(j=0 ; j<M ; j++){
            printf("%d ",ptr[row][j]);
        }
        printf("\n");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
