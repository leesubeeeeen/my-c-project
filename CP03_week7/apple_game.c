#include <stdio.h>

int N, M, count = 0;
int a[10][17];

int get_sum(int x1, int y1, int x2, int y2) {
    int sum = 0;
    for (int i = x1; i <= x2; i++) {
        for (int j = y1; j <= y2; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}

int main() {
    scanf("%d %d", &N, &M);
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            for (int x = i; x < N; x++) {
                for (int y = j; y < M; y++) {
                    int sum = get_sum(i, j, x, y);
                    if (sum == 10)
                        count++;
                }
            }
        }
    }

    printf("%d\n", count);
    return 0;
}

