#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int cnt = 1;

    char *ptr = str;
    char *fix = ptr;
    ptr++;

    while(*ptr){
        if(*ptr == *fix){
            cnt++;
            
        }else{
            printf("%c%d",*fix,cnt);
            cnt=1;
            fix = ptr;
        }ptr++;
    }printf("%c%d",*fix,cnt);
    return 0;
}