#include <stdio.h>
struct point{
    int xpos;
    int ypos;
};
int main(){
    struct point arr[4];
    int i;
    for(i=0;i<4 ; i++){
        printf("점의 좌표 입력: ");
        scanf("%d %d",&arr[i].xpos, &arr[i].ypos);
    }
    for(i=0 ; i<4 ; i++){
        printf("[%d, %d]\n",arr[i].xpos,arr[i].ypos);
    }
    return 0;
}
