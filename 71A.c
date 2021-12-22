#include <stdio.h>
#include <string.h>

int main()
{
    int stringLength, t;
    char words[101], firstLetter, lastLetter;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", words);
        for (stringLength = 0; words[stringLength] != '\0'; stringLength++)
        {
        }; // get string length

        if (stringLength > 10)
        {
            printf("%c%d%c\n", words[0], stringLength-2, words[stringLength-1]);
        }else{
            printf("%s\n", words);
        }
    }

    return 0;
}