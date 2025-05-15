#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y; //bomb
    int n; //size
    int a,b; //people
    scanf("%d %d %d",&x,&y,&n);
    scanf("%d %d",&a,&b); 

    int arr[20][20];
    for(int i = 0 ; i<20 ; i++){
        for(int j = 0 ; j<20 ; j++){
            arr[i][j] = 0; 
        }
    }
    int start_x = x-n/2;
    int start_y = y-n/2;
    int end_x = x+n/2;
    int end_y = y+n/2;
    
    int i,j;
    if(start_x<0) start_x = 0;
    if(start_y<0) start_y = 0;
    if(end_x>20) end_x = 20;
    if(end_y>20) end_y = 20;
    for(i = start_x ; i<=end_x ; i++){
        for(j = start_y ; j<=end_y ; j++){
            arr[j][i] = 1; 
        }
    }

    for(i = 0 ; i<20 ; i++){
        for(j = 0 ; j<20 ; j++){
            if(arr[i][j] == 0){
                if(j==a && i==b){
                    printf("A ");
                }else{
                    printf("%d ",0);
                }
            }else{
                if(j==a && i==b){
                    printf("D ");
                }else{
                    printf("X ");
                }
            }
            
        }printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
