#include <stdio.h>
int f(int n){
    if(n==1) 
        return 1;
    else if(n==0)
        return 0;
    else 
        return f(n-1)+f(n-2);
}
int main(){
    int n;
    int result = 0;
    int plus = 1;
    scanf("%d",&n);
    while(result<=n){
        result = f(plus);
        if(n == result){
            printf("y");
            break;
        }++plus;
    }
    if(n != result) printf("n");
}