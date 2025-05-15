#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int my_atoi(char S[], int size) {
    unsigned int result = 0;
    for(int i = size ; i>=0 ; i--){
        unsigned int num = 1;
        for(int j = i-1 ; j>0 ; j--){
            num *= 10;
        }
        switch(S[size-i]){
            case '0':
                break;
            case '1':
                result += num*1;
                break;
            case '2':
                result += num*2;
                break;
            case '3':
                result += num*3;
                break;
            case '4':
                result += num*4;
                break;
            case '5':
                result += num*5;
                break;
            case '6':
                result += num*6;
                break;
            case '7':
                result += num*7;
                break;
            case '8':
                result += num*8;
                break;
            case '9':
                result += num*9;
                break;
            case '\0':
                return result;
            default:
                return 0;
        }
    }
    return -1;
}

int main() {
    char S[1024] = {0};
    scanf("%s", S);
    int result = my_atoi(S,strlen(S));
    printf("%d", result);
}