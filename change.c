#include <stdio.h>
int main(){
    printf("char -> int 변환\n");
    char c = 'A';
    int i = c;

    printf("char c = %c\n",c);
    printf("c -> int형 = %d\n\n",i);

    printf("int -> char 변환\n");
    int num = 98;
    char ch = num;

    printf("int num = %d\n",num);
    printf("num -> char형 = %c\n\n",ch);

    printf("float -> int 변환\n");
    float f = 3.14;
    int fi = f;

    printf("float f = %f\n",f);
    printf("f -> int형 = %d\n\n",fi);

    printf("int -> float 변환\n");
    int n = 42;
    float fn = n;

    printf("int n = %d\n",n);
    printf("n -> float형 = %f\n\n",fn);

    int si = -10;
    unsigned int ui = si;

    printf("signed -> unsigned 변환\n");
    printf("int si = %d\n",si);
    printf("si -> unsigned int형 = %u\n\n",ui);

    printf("unsigned -> signed 변환\n");
    unsigned int u = 4294967286;
    int s = u;

    printf("unsigned int u = %u\n",u);
    printf("u -> signed int형 = %d\n\n",s);

    return 0;
}