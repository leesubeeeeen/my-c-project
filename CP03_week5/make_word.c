#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    char ch[1000];

    scanf("%s", str);
    scanf("%s", ch);
    char *chptr = ch;

    int found;
    int can_make = 1; 
    while(*chptr){ 
        char *ptr = str;
        found = 0;
        while(*ptr){
            if(*ptr == *chptr){
                found = 1;
                *ptr = '0'; 
                break; 
            }else{
                ptr++; 
            }
            
        }
        if(found != 1){
            can_make = 0;
            break;
        }
        chptr++; 
    }
    if(can_make == 1){
        printf("Yes");
    }else{
        printf("No");
    }
}