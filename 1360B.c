#include <stdio.h>
/**
 * This function arrange array item in assecending
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       02/04/2022
 * Time         00:14:23
 * @param       int atleth[1001], int n
 * @return      void
 */
void asc(int atleth[1001], int n)
{
    int i, j, temp, isDouble = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (atleth[i] > atleth[j])
            {
                temp = atleth[i];
                atleth[i] = atleth[j];
                atleth[j] = temp;
            }
        }
    }
}
// End

/**
 * This function return small differ value
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       02/04/2022
 * Time         00:13:28
 * @param       int atleth[1001], int n
 * @return      small differ value of adjecent two array
 */
int smallDiffer(int atleth[1001], int n)
{
    int i, j;
    int smallDiffer = 2000;
    for (i = 1; i < n; i++)
    {
        if ((atleth[i]-atleth[i-1]) < smallDiffer)
        {
            smallDiffer = atleth[i]-atleth[i-1];
        }
    }
    return smallDiffer;
}
// End
int main()
{
    int t, n, atleth[1001], i, j;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d", &atleth[i]);
        }
        asc(atleth, n);
        printf("%d\n", smallDiffer(atleth, n));
        
    }

    return 0;
}