#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

char** delete_char(char input[SIZE][SIZE], int *new_row, int *new_col) {
    int i, j;
    int del_row[SIZE] = {0};
    int del_col[SIZE] = {0};

    int row_del_count = 0;
    int col_del_count = 0;

    for(i = 0; i < SIZE; i++) {
        int cnt = 0;
        for(j = 0; j < SIZE - 1; j++) {
            if(input[i][j] == input[i][j+1]) cnt++;
        }
        if(cnt == SIZE - 1) del_row[i] = 1, row_del_count++;
    }

    for(i = 0; i < SIZE; i++) {
        int cnt = 0;
        for(j = 0; j < SIZE - 1; j++) {
            if(input[j][i] == input[j+1][i]) cnt++;
        }
        if(cnt == SIZE - 1) del_col[i] = 1, col_del_count++;
    }

    *new_row = SIZE - row_del_count;
    *new_col = SIZE - col_del_count;
    
    char **result = (char **)malloc(sizeof(char *) * (*new_row));
    for(i = 0; i < *new_row; i++) {
        result[i] = (char *)malloc(sizeof(char) * (*new_col));
    }

    int r = 0;
    for(i = 0; i < SIZE; i++) {
        if(del_row[i]) continue; 
        int c = 0;
        for(j = 0; j < SIZE; j++) {
            if(del_col[j]) continue; 
            result[r][c++] = input[i][j];
        }
        r++;
    }

    return result;
}

int main() {
    char input[SIZE][SIZE];
    int new_row, new_col;

    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf(" %c", &input[i][j]); // input

    char **resized = delete_char(input, &new_row, &new_col);

    if (resized != NULL) {
        for (int i = 0; i < new_row; i++) {
            for (int j = 0; j < new_col; j++) {
                printf("%c ", resized[i][j]);
            }
            printf("\n");
            free(resized[i]);
        }
        free(resized);
    }

    return 0;
}
