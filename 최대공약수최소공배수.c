#include <stdio.h>
int GCD(int A, int B){
    if(B == 0) return A;
    else{
        return GCD(B,A%B);
    }
}
int LCM(int A, int B){
    return A*B/GCD(A,B);
}
int main(){
    int test_case;
    int A, B;
    int gcd,lcm;
    scanf("%d",&test_case);
    for(int i = 0 ; i<test_case ; i++){
        scanf("%d %d",&A,&B);
        gcd = GCD(A,B);
        lcm = LCM(A,B);
        printf("%d %d\n",gcd,lcm);
    }
}