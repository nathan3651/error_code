/**
打印结果：
Success
Error code unknown
-6(Out of memory)
9(Timed out)
*/

#include <stdlib.h>
#include <stdio.h>

#include "my_errorcode.h"

int foo()
{
    return -E_OUTOFMEM;
}

int bar()
{
    return E_TIMEOUT;
}

int main(void)
{
    printf("%s\n", get_errorcode(0));
    printf("%s\n", get_errorcode(-250));

    int ret = foo();
    printf("%d(%s)\n",  ret, get_errorcode(ret));

    ret = bar();
    printf("%d(%s)\n",  ret, get_errorcode(ret));

    return 0;
}
