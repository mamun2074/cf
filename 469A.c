#include <stdio.h>
int checkItemExist(int x[100], int lengthX, int item)
{  // if item exist on array return 1 else 0
    int i, flag = 0;
    for (i = 0; i < lengthX; i++) 
    {
        if (x[i] == item)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main()
{
    int numberOfLabels, littleXlabel, littleYlabel, xlabel[100], yLabel[100], i, flag = 1;
    scanf("%d", &numberOfLabels);
    scanf("%d", &littleXlabel);
    for (i = 0; i < littleXlabel; i++)
    {
        scanf("%d", &xlabel[i]);
    }
    scanf("%d", &littleYlabel);
    for (i = 0; i < littleYlabel; i++)
    {
        scanf("%d", &yLabel[i]);
    }

    for (i = 1; i <= numberOfLabels; i++)
    {
        if (!checkItemExist(xlabel, littleXlabel, i) && !checkItemExist(yLabel, littleYlabel, i))
        {  // if item not found in both item then the not fill full the all labels
            flag = 0; 
            break;
        }
    }
    if (flag)
    {
        printf("I become the guy.\n");
    }
    else
    {
        printf("Oh, my keyboard!\n");
    }

    return 0;
}