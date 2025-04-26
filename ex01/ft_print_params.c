#include <stdio.h>

int main(int argc, char *argv[]) 
{
    argv[1] = "test1";
    argv[2] = "test2";
    argv[3] = "test3";
    printf("%s\n%s\n%s\n", argv[1],argv[2],argv[3]);
    return 0;
}