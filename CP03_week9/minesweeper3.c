#include <stdio.h>
#include <stdlib.h>

int main() {
	
    char* arr[10];
    for (int i=0; i<10; i++)
    	arr[i] = (char*)malloc(sizeof(char) * 10); //similar to "arr[i] = char arr2[10]"
    char** dptr;
    /////////////////
    // write your code in this section
    // do not use arr directly, use dptr
    dptr = arr;
    int i, j;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            scanf(" %c", (dptr[i] + j)); 
        }
    }

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            if(dptr[i][j] != '*') {
                int count = 0;
                for(int k = i - 1; k <= i + 1; k++) {
                    for(int p = j - 1; p <= j + 1; p++) {
                        if(k == i && p == j) continue; 
                        if(k >= 0 && k < 10 && p >= 0 && p < 10) {
                            if(dptr[k][p] == '*') {
                                count++;
                            }
                        }
                    }
                }
                printf("%d ", count);
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }
    
    /////////////////
    return 0;
}