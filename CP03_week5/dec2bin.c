#include <stdio.h>
int main(){
    int N; //number of test case
    unsigned int num; //number
    unsigned int arr[1000000];
    unsigned int q,j;
    int q_num;
    scanf("%d \n",&N);
    
    for(int i = 0 ; i<N ; i++){
        scanf("%d",&num);
        arr[0] = num;
        q = arr[0];
        j = 0;
        q_num = 0;
        while(q>=2){
            q = arr[j]/2;
            arr[j+1] = q;
            j++; 
            q_num++;
        }
        for(int n = q_num; n>=0; n--){
            printf("%d",*(arr+n)%2);
        }
        printf("\n");
    }
    return 0;
}