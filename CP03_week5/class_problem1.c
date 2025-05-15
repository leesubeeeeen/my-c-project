#include <stdio.h>
int main(){
    char * s1 = "Eagles";
    char *s2 = s1;
    char s3[] = "Twins";
    char *s4 = s3;
    s1 = "Lions";
    s2 = "Tigers";
    //s3 = "Giants";
    s1[0] = 'A';
    s2[0] = 'B';
    s4[0] = 'D';
    
    return 0;
}