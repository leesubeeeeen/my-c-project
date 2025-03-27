#include <stdio.h>
int main(){
    int G;
    scanf("%d",&G);
    int remainder;
    int result;

    if(G%3 == 0){
        result = G/3;
    }else{
        remainder = G%3;
        result = G/3;
        if(remainder % 2 == 0){
            result += remainder/2;
        }else{
            result += remainder/2;
            remainder = remainder%2;
            
            ++result;
        }
    }
    printf("%d",result);
}