#include <stdio.h>
#include <math.h>
struct point{
    int x;
    int y;
};

double length(int x1, int x2, int y1, int y2){
    double len = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    
    return len;
}   

int main(){
    int N;
    scanf("%d",&N);
    int i,j;
    struct point p;
    int xy[2][N];
    for(i=0 ; i<N ; i++){
        scanf("%d %d",&p.x, &p.y);
        xy[0][i] = p.x;
        xy[1][i] = p.y;
    }
    double len[N-1][N-1];
    
    for(i=0 ; i<N-1 ; i++){
        for(j=0 ; j<N-1 ; j++){
            len[i][j] = 0.0;
        }
    }
    
    for(i=0 ; i<N-1 ; i++){
        for(j=i+1 ; j<N ; j++){
            double l = length(xy[0][i],xy[0][j], xy[1][i], xy[1][j]);
            len[i][j-1] = l;
        }
    }
    
    double max = 0.0;
    int x=0, y=0;
    for(i=0 ; i<N-1 ; i++){
        for(j=0 ; j<N-1 ; j++){
            if(len[i][j] > max){
                max = len[i][j];
                x = i;
                y = j;
            }
        }
    }

    int x1,x2,y1,y2;
    x1 = xy[0][x];
    y1 = xy[1][x];

    x2 = xy[0][y+1];
    y2 = xy[1][y+1];

    printf("%d %d\n",x1, y1);
    printf("%d %d\n",x2,y2);
    printf("%.2f\n",max);


}