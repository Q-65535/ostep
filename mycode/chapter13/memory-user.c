#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    if(argc != 2){
        printf("argument error");
        exit(EXIT_FAILURE);
    }
    
    printf("pid: %d\n", getpid());

    int memory = atoi(argv[1]) * 1024 * 1024;
    int* arr = malloc(memory);
    int len = (int) memory/sizeof(int);

    while (1)
    {   
        //iteratively allocate memory to test memory leak
        // malloc(9999); 
        for (int i = 0; i < len; i++)
        {
            arr[i] = 1;
        }
        
    }

    return 0;
    
}