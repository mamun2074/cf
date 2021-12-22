#include <stdio.h>

int main()
{
    int i = 0, flag = 1;
    char letter1, letter2;
    char string1[101];
    char string2[101];
    scanf("%s", &string1);
    scanf("%s", &string2);
    printf("%d ", string1[0]);
    printf("%d \n", string2[0]);
    while (string1[i] != '\0') // loop through untill end of the last char
    {
        if (string1[i] >= 'a' && string1[i] <= 'z') // echek if the letter is smaller  string1
        {
            letter1 = string1[i];
        }
        else // convert it into smaller letter
        {
            letter1 = string1[i] + 32;
        }

        if (string2[i] >= 'a' && string2[i] <= 'z') // echek if the letter is smaller string 2
        {
            letter2 = string2[i];
        }
        else
        {
            letter2 = string2[i] + 32;
        }

        if (letter1 < letter2)
        {
            printf("-1");
            flag = 0;
            break;
        }
        else if (letter1 > letter2)
        {
            printf("1");
            flag = 0;
            break;
        }
        i++;
    }
    if (flag)
    {
         printf("0");
    }

    return 0;
}