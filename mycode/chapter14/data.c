#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(){
    int* data = malloc(100*sizeof(int));
    for(int i=0;i<100;i++){
        data[i]=0;
    }
    data[100]=0;
    free(data);
    printf("try to print 3nd elemnt: %d", data[2]);
}