#include <stdio.h>
int main(){
    int arr[3] = {0,1,2};
    int * ptr = &arr[0]; //int * ptr = arr과 동일한 표현
    printf("%d %d\n",ptr[0],arr[0]); //0 0출력
    printf("%d %d\n",ptr[1],arr[1]); //1 1출력
    printf("%d %d\n",ptr[2],arr[2]); //2 2출력
    printf("%d %d\n",*ptr,*arr); //0 0출력

    return 0;
}