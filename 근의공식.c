#include <stdio.h>
#include <math.h>
int main(){
    int test_number;
    scanf("%d",&test_number);
    for(int i = 0 ; i<test_number ; i++){
        int a, b, c;
        scanf("%d %d %d",&a,&b,&c);
        double x1, x2;
        if(b*b-4*a*c<0 || a==0){
            printf("error\n");
        }else{
            x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
            x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

            if(x1>=x2) printf("%.2f %.2f\n",x1,x2);
            else printf("%.2f %.2f\n",x2,x1);
        }
        
        
    }
    return 0;
}