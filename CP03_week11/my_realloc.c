#include <stdio.h>
#include <stdlib.h>

int* my_realloc(int* old, int old_size, int new_size);

int main() {

    int n, m;
    int* array;

    scanf("%d",&n);
    array = (int *)malloc(sizeof(int)*n);

    int i;
    for(i=0 ; i<n ; i++){
        scanf("%d ",&array[i]);
    }
    scanf("%d",&m);

    int * ptr = my_realloc(array,n,m);

    for(i=0 ; i<m ; i++){
        printf("%d ",ptr[i]);
    }

    return 0;
}

int* my_realloc(int* old_array, int old_size, int new_size) {
   int *new_array = (int *)malloc(sizeof(int)*new_size);
   int i;

   for(i=0 ; i<old_size ; i++){ //copy
    new_array[i] = old_array[i];
   }

   for(i=old_size ; i<new_size ; i++){
        scanf("%d ",&new_array[i]);
   }
   free(old_array);
   return new_array;
}