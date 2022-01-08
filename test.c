#include <stdio.h>

int main()
{
    int i = 2340, x = 0, y, z, p;
    while (scanf("%d", &x) != EOF)
    {
        printf("%d ", x % 20);
        printf("%d \n", x % 10);
    }
    return 0;
}