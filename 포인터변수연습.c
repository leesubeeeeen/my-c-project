#include <stdio.h>
int main(){
    int num = 365;
    printf("%d\n",num);
    printf("%p\n",&num);
    printf("%d\n",*&num);

    int * pnum;
    int x;

    pnum = &num; //num변수의 주소
    printf("%p\n",pnum); //num변수의 주소값 출력. printf("%p\n",&num)과 같다.
    printf("%d\n",*pnum); //365출력

    x = *pnum; //365가 x에 저장
    printf("%d\n",x); //365출력
    printf("%p\n",&x); //변수 x의 주소 출력
    printf("%d\n",*&x); //x의 주소값을 먼저 반환하고 그 주소에 들어있는 내용을 꺼내 출력하므로 365가 출력된다.
    return 0;

}