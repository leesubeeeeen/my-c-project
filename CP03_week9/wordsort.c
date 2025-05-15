#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* arr[100];
    for (int i = 0; i < 100; i++)
        arr[i] = (char*)malloc(sizeof(char) * 100);

    char** dptr = arr;

    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", dptr[i]);
    }

    for (int i = 1; i < N; i++) {
        char* temp = dptr[i];
        int j = i - 1;
        while (j >= 0 && strlen(dptr[j]) > strlen(temp)) {
            dptr[j + 1] = dptr[j];
            j--;
        }
        dptr[j + 1] = temp;
    }

    for (int i = 0; i < N; i++) {
        printf("%s\n", dptr[i]);
    }

    return 0;
}
