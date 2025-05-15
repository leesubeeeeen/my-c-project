#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int indexof(char S1[], char S2[]) {
    int len1 = strlen(S1);
    int len2 = strlen(S2);

    for (int i = 0; i <= len1 - len2; i++) {
        int found = 1;
        for (int j = 0; j < len2; j++) {
            if (S1[i + j] != S2[j]) {
                found = 0; //false
                break;
            }
        }
        if (found) return i; //true
    }

    return -1;
}

int main() {
    char S1[1024] = {0};
    char S2[1024] = {0};

    scanf("%s",S1);
    scanf("%s",S2);
    
    int result = indexof(S1,S2);
    printf("%d",result);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
