#include <stdio.h>
int main()
{
    int numberOfPeople, personThink, flag = 0;
    scanf("%d", &numberOfPeople);
    while (numberOfPeople--)
    {
        scanf("%d", &personThink);
        if (personThink)
        {
            flag = 1;
        }
    }
    if(flag){
        printf("HARD\n");
    }else{
        printf("EASY\n");
    }

    return 0;
}