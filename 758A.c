#include <stdio.h>
int main()
{
    int n, a[101], i, j, temp, result = 0;
    scanf("%d", &n);
    // insert all n number of citizens burls
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // sort asc number of burls 
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // iterate all number of citizen and  subtract from first to i'th citizen summand into result
    for (i = 1; i < n; i++)
    {
        result += a[0] - a[i];
    }
    printf("%d \n", result);

    return 0;
}