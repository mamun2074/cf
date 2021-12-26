#include <stdio.h>

int checkDistinc(char number[5]) // if char are distinc return 1 else return false
{
    int i, j, flag = 1;
    for (i = 0; number[i] != '\0'; i++)
    {
        for (j = i + 1; number[j] != '\0'; j++)
        {
            if (number[i] == number[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
    return flag;
}
int main()
{
    int y, i = 0;
    char year[6];
    scanf("%d", &y);

    for (i = y + 1; i <= 9013; i++) // loop through y to 9000
    {
        sprintf(year, "%d", i); // convert number into string
        if (checkDistinc(year))
        {
            printf("%d \n", i);
            break;
        }
    }
    return 0;
}