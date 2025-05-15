#include <stdio.h>
void PrintArray(int arr[],int len);

int main(void){
    int arr[3] = {1,2,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    PrintArray(arr,len);
    return 0;
}
void PrintArray(int arr[],int len){
    for(int i = 0 ; i<len ; i++){
        printf("%d ",arr[i]);
    }
}