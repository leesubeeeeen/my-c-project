#include <stdio.h>
int main(void){
    int num1 = 5;
    int * const ptr1 = &num1;
    int num2 = 10;
    int * const ptr2 = &num2;

    // ptr1 = ptr2; const라서 새로운 주솟값으로 저장 불가
    // ptr1 = ptr1+1; 어떤 값으로 지정하더라도
    // ptr1 = &num2; 변경 불가능

    int arr[] = {1,2,3,4,5};
    int * ptr;
    ptr = arr; //arr[0]의 주소값이 들어있음
    //arr = ptr; 배열 이름은 포인터와 다르다다

}