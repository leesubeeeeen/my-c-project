#include <stdio.h>
#include <string.h>
int main(){
    char str[10];
    int ch;
    int i = 0;
    while((ch= getchar())!=EOF){
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    printf("%s\n",str);
    return 0;
}