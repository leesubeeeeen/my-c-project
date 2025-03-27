#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count = 0;
    while(count < 4){
        char ch;
        scanf(" %c",&ch);
        ++count;

        if(ch>='0' && ch<='9'){
            int num = (int)(ch-'0');
            printf("%d ",num);
        }else if(ch>='A' && ch<='Z'){
            ch = ch+32;
            printf("%c ",ch);
        }else if(ch>='a' && ch<='z'){
            ch = ch-32;
            printf("%c ",ch);
        }else{
            printf("%c ",ch);
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}