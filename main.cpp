#include "base.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("gcc  = %d\n", COMPILER_GCC);
    printf("clang  = %d\n", COMPILER_CLANG);
    printf("linux  = %d\n", OS_LINUX);
    printf("win32  = %d\n", OS_WIN32);
    printf("win64  = %d\n", OS_WIN64);

    return 0;
}
