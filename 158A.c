#include <stdio.h>

int main()
{
    int n, k, i, advanceToTheNextScore=0;
    scanf("%d%d", &n, &k);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; a[i]>=a[k-1]&&a[i]&&i<n; i++);
    
    printf("%d\n", i);

    return 0;
}