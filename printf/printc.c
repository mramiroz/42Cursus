#include "printf.h"
#include <unistd.h>

void print(va_list ptr)
{
    char x = va_arg(ptr, char);
    write(1, &x, 1);
}