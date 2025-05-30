#include <stdio.h>
struct point{
    int xpos;
    int ypos;
};
struct circle{
    double radious;
    struct point * center;
};
int main(void){
    struct point cen = {2,7}; //xpos = 2, ypos = 7
    double rad = 5.5;
    struct circle ring = {rad,&cen};
    struct circle * pring = &ring;
    printf("xpos: %d\n",(pring->center)->xpos);
    printf("반지름: %f \n",ring.radious);
    printf("중심 [%d, %d] \n",
        (ring.center -> xpos), //(*(ring.center).xpos) 와 같은 표현
        (ring.center -> ypos)); //(*(ring.center).ypos) 와 같은 표현
    return 0;
}