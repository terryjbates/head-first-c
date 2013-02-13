#include <stdio.h>
#include <stdlib.h>


int y = 1;
int main()
{
    int x = 4;
    printf("x (in the stack) is stored at %p\n", &x);
    printf("y (stored in globals) is stored at %p\n", &y);    
    
    return 0;   
}