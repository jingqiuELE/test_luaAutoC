#include "arithmatic.h"

#define NULL 0

int add_int(int a, int b)
{
    return a+b;
}

void add_complex(Complex *a, Complex *b)
{
    if((a==NULL) || (b==NULL))
    {
        return;
    }
    a->real_part += b->real_part;
    a->virtual_part += b->virtual_part;
}
