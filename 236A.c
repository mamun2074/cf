#include <stdio.h>

int main()
{
    int i, j, flag, distrincLetter = 0; // i main string j comparing
    char name[101];
    char distrincName[101];
    scanf("%s", name);

    for (i = 0; name[i] != '\0'; i++) // go throug all letter untill end
    {
        flag = 1; // initially flag 1 for no match letter so increment distrinc letter
        for (j = i + 1; name[j] != '\0'; j++) // go through after i+1 untill end
        {
            if (name[i] == name[j]) // if exist then just script it
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            distrincLetter++;
        }
    }

    if (distrincLetter % 2 == 0) // if mod 0 means even number 
    {
        printf("CHAT WITH HER!");
    }else{  // odd number 
        printf("IGNORE HIM!");
    }

    return 0;
}