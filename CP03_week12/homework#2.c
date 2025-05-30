#include <stdio.h>
int main(){
    int arr[2][4] = {
        {1,2,3,4},
        {5,6,7,8}
    };
    int (*p)[4] = arr+1; //int (*p)[][4] -> &arr[1]
    size_t byte_offset = (char*)p-(char*)arr;
    //p는 &arr[1]이고 arr는 &arr[0]이다. arr[0]~arr[1]사이에는 int 4개 -> 4*4 = 16바이트 차이이
    int elem_idx = byte_offset/sizeof(int); //16/4 = 4 즉, 4번째 요소부터 시작한다는 의미미
    printf("%d\n",((int*)arr)[elem_idx-2]); //arr을 1차원 배열처럼 간주
}