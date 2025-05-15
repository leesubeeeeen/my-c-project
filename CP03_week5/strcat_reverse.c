#include <stdio.h>
#include <string.h>
int main() {
    char a[50];
    char b[50];
    char c[50];
    char d[50];
    
    char* array[] = {a, b, c, d};
    char result[200];
    ///////////////////
    
    
    // write your code in this section
    // do not use variable a,b,c,d directly
    scanf("%s %s %s %s",a,b,c,d);
    int len;
    int k = 0;
    char *p;
    for(int i = 3 ; i>=0 ; i--){
        p = array[i];
        len = strlen(array[i]);
        for(int j = k ; j<k+len ; j++){
            result[j] = *p++;
        }k+=len;
    }
    ///////////////////
    result[k] = '\0';
    printf("%s\n", result);
    return 0;
}