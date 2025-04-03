#include <stdio.h>
int main(){
    unsigned int a,b,c,d;
    unsigned int x=0;
    scanf("%u %u %u %u",&a,&b,&c,&d);
    unsigned char * ptra = (unsigned char *)&a;
    unsigned char * ptrb = (unsigned char *)&b;
    unsigned char * ptrc = (unsigned char *)&c;
    unsigned char * ptrd = (unsigned char *)&d;
    unsigned char * ptrx = (unsigned char *)&x;

    ptrx[3] = ptra[3];
    ptrx[2] = ptrb[2];
    ptrx[1] = ptrc[1];
    ptrx[0] = ptrd[0];
    
    printf("%u\n",x);
}