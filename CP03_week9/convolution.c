#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int image[5][5];
    int mask[3][3];
    int result[3][3];
    /////////////////
    // write your code in this section
    // do not use arr directly, use dptr
    int * image_dptr[5];
    int* mask_dptr[3];
    int* result_dptr[3];

    int i,j;

    //row pointer
    for(i=0 ; i<5 ; i++){
        image_dptr[i] = image[i];
    }
    for(i=0 ; i<3 ; i++){
        mask_dptr[i] = mask[i];
    }
    for(i=0;i<3 ; i++){
        result_dptr[i] = result[i];
    }

    //scan
    for(i=0 ; i<5 ; i++){
        for(j=0 ; j<5 ; j++){
            scanf("%d ",&image_dptr[i][j]);
        }
    }
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            scanf("%d ",&mask_dptr[i][j]);
        }
    }

    
    for(i=0 ; i<3 ; i++){
        for(j=0 ; j<3 ; j++){
            int sum = 0;
            for(int x=0;x<3 ; x++){
                for(int y=0 ; y<3 ; y++){
                    sum+=image_dptr[i+x][j+y] * mask_dptr[x][y];                }
            }
            if(sum<0) sum=0;
            else if(sum>9) sum=9;
            result_dptr[i][j] = sum;
        }
    }

    for(i=0 ; i<3 ; i++){
        for(j=0;j<3 ; j++){
            printf("%d ",result_dptr[i][j]);
        }
        printf("\n");
    }


    /////////////////
    
    return 0;
}