#include <stdio.h>
int main(){
    int sum = 0;
    int num;
    int * psum = &sum;
    int * pnum = &num;
    for( (*pnum) = 1;(*pnum)<=10;(*pnum)++){
        (*psum) += (*pnum);
    }
    printf("%d\n",(*psum));
    return 0;

}