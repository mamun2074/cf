#include <stdio.h>

int main()
{
    int i = 0, n, ans = 0;
    char stoneColors[51];
    char prev, current, next;

    scanf("%d", &n); // take number of colors
    scanf("%s", &stoneColors); // take all colors as string

    while (stoneColors[i] != '\0' && i < n)  // loop through last cha of string and not gatter than n
    {
        current = stoneColors[i]; // assaign current letter on current value
        if (i == 0)
        {
            prev = current; // first letter on prev
        }
        else
        {
            if (current == prev) //check if current & prev are equal than ans ++
            {
                ans++;
            }
            prev = current; // assaign current letter on current value
        }
        i++;
    }

    printf("%d \n", ans);

    return 0;
}