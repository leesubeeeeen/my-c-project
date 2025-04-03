#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int N, k;
    scanf("%d %d",&N,&k);
    int intarr[N];
    for(int i = 0 ; i<N ; i++){
        scanf("%d ",&intarr[i]);
    }
    int i,j;
    for(int t = 0 ; t<k ; t++){
        scanf("%d %d\n",&i,&j);
        int temp;
        temp = intarr[i];
        intarr[i] = intarr[j];
        intarr[j] = temp;
        
    }
    for(int p = 0 ; p<N ; p++){
        printf("%d ",intarr[p]);
    }
    return 0;
}