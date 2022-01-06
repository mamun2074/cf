#include <stdio.h>

int main()
{
    int i, j, isDublicate, flag, nonDistincLetter = 0;
    char line[1005];
    gets(line);
    for (i = 0; line[i] != '\0'; i++)
    {
        if (line[i] != '{' && line[i] != ',' && line[i] != ' ' && line[i] != '}') // script {, } from string
        {
            flag = 1;
            for (j = i + 1; line[j] != '\0'; j++) // check char are duplicate or not
            {
                if (line[j] != '{' && line[j] != ',' && line[j] != ' ' && line[j] != '}') // script {, } from string
                {
                    if (line[i] == line[j]) 
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if (flag)
            {
                nonDistincLetter++;
            }
        }
    }
    printf("%d \n", nonDistincLetter);
    return 0;
}