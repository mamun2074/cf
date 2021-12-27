#include <stdio.h>

int main()
{
    int i = 2340, x, y, z, p;

    x = i % 10;
    y = (i / 10) % 10;
    z = (i / 100) % 10;
    p = i / 1000;
    
    printf("x is: %d, y is: %d, z is: %d, p is: %d, examp: %d", x,y,z,p, (2156%10));

    return 0;
}