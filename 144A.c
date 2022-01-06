#include <stdio.h>

/**
 * This function return height value of index array
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/01/2022
 * Time         23:42:20
 * @param       int arr[], int lenght
 * @return      int
 */
int getHightValueOfIndex(int arr[], int lenght)
{
    int i, index, value = arr[0];
    for (i = 1; i < lenght; i++)
    {
        if (value < arr[i])
        {
            value = arr[i];
            index = i;
        }
    }
    return index;
}
// end

/**
 * This function give lowest value index of array
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       01/01/2022
 * Time         23:45:32
 * @param       int arr[], int lenght
 * @return      int
 */
int getLowestValueOfIndex(int arr[], int lenght)
{
    int i, index, value = arr[0];
    for (i = 1; i < lenght; i++)
    {
        if (value >= arr[i])
        {
            value = arr[i];
            index = i;
        }
    }
    return index;
}
// End

int main()
{
    int numberOfsolders, i, minNumberOfSecond = 0, temp, hightValue, lowestValue;
    scanf("%d", &numberOfsolders);
    int soldersHeight[101];
    for (i = 0; i < numberOfsolders; i++)
    {
        scanf("%d", &soldersHeight[i]);
    }
    hightValue = getHightValueOfIndex(soldersHeight, numberOfsolders); // get index of hight value of array
    for (i = hightValue; i > 0; i--)
    {
        if (soldersHeight[i - 1] < soldersHeight[i]) // swap highet value in the first
        {
            temp = soldersHeight[i];
            soldersHeight[i] = soldersHeight[i - 1];
            soldersHeight[i - 1] = temp;
            minNumberOfSecond++;
        }
    }
    lowestValue = getLowestValueOfIndex(soldersHeight, numberOfsolders); // get lowes value on index
    for (i = lowestValue; i < numberOfsolders - 1; i++)
    {
        if (soldersHeight[i] < soldersHeight[i + 1]) // swap lowest value in the last
        {
            temp = soldersHeight[i];
            soldersHeight[i] = soldersHeight[i + 1];
            soldersHeight[i + 1] = temp;
            minNumberOfSecond++;
        }
    }
    printf("%d \n", minNumberOfSecond);
    return 0;
}