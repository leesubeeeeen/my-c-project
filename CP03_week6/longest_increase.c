#include <stdio.h>

void longest_increase(int arr[],int size);
int main(void){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i = 0 ; i<size ; i++){
        scanf("%d",&arr[i]);
    }
    longest_increase(arr,size);
    return 0;
}
void longest_increase(int arr[],int size){
    
    int maxLen = 1;
    int currentLen = 1;

    for(int i = 0 ; i<size-1 ; i++){
        if(arr[i]<arr[i+1]){
            currentLen++;
            if(currentLen>maxLen){
                maxLen = currentLen;
            }
        }else{
            currentLen = 1;
        }
    }
    printf("%d",maxLen);
}