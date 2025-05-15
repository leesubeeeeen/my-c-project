#include <stdio.h>
int main(){
    int arr[3] = {31,12,365};
    printf("배열 이름: %p \n",arr);
    printf("첫 번째 요소 주소: %p \n",&arr[0]);
    printf("두 번째 요소 주소: %p \n",&arr[1]);
    printf("세 번째 요소 주소: %p \n",&arr[2]);

    return 0;
}