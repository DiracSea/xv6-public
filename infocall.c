#include "types.h"
#include "user.h"


int 
main(int argc, char *argv[])
{
    printf(0, "LAB1 STARTING ...\n");
    printf(0, "Process Numbers are: %d\n", info(1)); 
    printf(0, "SYSCALL Numbers are: %d\n", info(2)); 
    printf(0, "Memory Page Numbers are: %d\n", info(3));
    printf(0, "LAB1 END\n");

    exit();
}