#include <stdio.h>
#include <string.h>
int main()
{
    int numberOflayer, i;
    char abc[10000];
    scanf("%d", &numberOflayer);
    for (i = 1; i <= numberOflayer; i++)
    {
        if (i % 2 == 0)
        {
            strcat(abc,"I love ");
        }
        else
        {
            strcat(abc,"I hate ");
        }
        
        if(numberOflayer==i){
            strcat(abc,"it");
        }else{
            strcat(abc,"that ");
        }
    }

    printf("%s", abc);

    return 0;
}