#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int* ptr = malloc(sizeof(int));
    printf("addr: %p\n",ptr);
    printf("PID: %d\n", getpid());
    int* randomPtr;
    int a = 5;
    randomPtr=&a;
    printf("random ptr: %p", randomPtr);
}