#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    int index = 0;
    char c;
    while(((c=getchar())!=EOF) && index<99){
        str[index] = c;
        index++;
    }
    str[index] = '\0';
    index = 0;
    while(str[index] != '\0'){
        if(str[index] != ' '){
            printf("%c",str[index]);
        }index++;
    }
    printf("\n");
    return 0;
}