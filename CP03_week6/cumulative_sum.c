#include <stdio.h>
void sum(int arr[], int size);
int main(void){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }
    sum(arr,size);
    
    return 0;
}
void sum(int arr[],int size){
    int sum = 0;
    for(int i = 0 ; i<size ; i++){
        sum+=arr[i];
        printf("%d ",sum);
    }
}