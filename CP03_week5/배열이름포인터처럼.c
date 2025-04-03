#include <stdio.h>
int main(){
    int arr[3] = {0,1,2};
    arr[0]++; //0번째 요소가 1이 됨
    printf("%d \n",*arr); //arr[0]의 주솟값에서의 실제 값 가져오기
    printf("%d \n",arr[0]);

    *arr +=100; //a[0] == 101
    printf("%d \n",arr[0]); //101출력
    return 0;
}