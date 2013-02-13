#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void fortune_cookie(char msg[])
{
    printf("Message reads: %s\n", msg);
    printf("Message reads: %p\n", msg);
    printf("msg occupies %lu bytes\n", sizeof(msg));
}                                      

int main(){
    char quote[] = "Cookies make you fat";
    fortune_cookie(quote);
    return 0;
}