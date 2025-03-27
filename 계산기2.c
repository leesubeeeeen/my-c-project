#include <stdio.h>
int main(){
    int test_number;
    scanf("%d",&test_number);
    for(int i = 0 ; i<test_number ; i++){
        int num1, num2;
        char ch;
        int result;
        scanf("%d %d %c",&num1,&num2,&ch);
        if(ch == '+'){
            result = num1+num2;
            printf("%d\n",result);
        }else if(ch == '-'){
            result = num1-num2;
            printf("%d\n",result);
        }else if(ch == '*'){
            result = num1*num2;
            printf("%d\n",result);
        }else if(ch == '/'){
            result = num1/num2;
            printf("%d\n",result);
        }else if(ch == '%'){
            result = num1%num2;
            printf("%d\n",result);
        }else if(ch == '^'){
            result = 1;
            for(int i = 0 ; i<num2 ; i++){
                result *= num1;
            }
            printf("%d\n",result);
        }else{
            return -1;
        }
    }

}
