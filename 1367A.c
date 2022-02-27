#include <stdio.h>
int main()
{
    int t, i, n;
    char b[101];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", &b); 
        for (i = 0; b[i] != '\0'; i++)
        {
            if (i % 2 == 0) // get even number char
            {
                printf("%c", b[i]);
            }
        }
        printf("%c", b[i-1]); // last char of string
        printf("\n");
    }
    return 0;
}