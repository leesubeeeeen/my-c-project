#include <stdio.h>
int main(){
    int x = 10;
    int y = 20;
    int *p;

    printf("초기 상태\n");
    printf("x = %d, x의 주소 : %p\n",x, &x);
    printf("y = %d, y의 주소 : %p\n",y, &y);

    p = &x;
    *p = *p +5;

    p = &y;
    *p = *p +2;

    printf("포인터를 통한 값 변경\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);

    int sum;
    p = &sum;
    *p = x+y;
    printf("sum에 포인터로 값 저장\n");
    printf("sum = %d, sum의 주소 : %p\n",sum, &sum);
    printf("포인터로 주변 메모리 접근\n");

    p = &x;
    printf("p - 1 = %p, 해당 주소 값 : %d\n", p-1, *(p-1));
    printf("p - 0 = %p, 해당 주소 값 : %d\n",p,*p);
    printf("p + 1 = %p, 해당 주소 값 : %d\n",p+1,*(p+1));
}