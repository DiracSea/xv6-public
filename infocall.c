#include "types.h"
#include "user.h"
#include <stdlib.h>

int 
main(int argc, char *argv[])
{
    int flag = atoi(argv[1]);

    printf(0, "LAB1 STARTING ...\n");

    switch (flag)
    {
    case 1:
    printf(0, "Process Numbers are: %d\n", lab1(flag));
    break;
    
    case 2:
    printf(0, "SYSCALL Numbers are: %d\n", lab1(flag)); 


    case 3: 
    printf(0, "Memory Page Numbers are: %d\n", lab1(flag));

    default:
    break;
    }
    
    printf(0, "LAB1 END\n");

    exit(0);
}