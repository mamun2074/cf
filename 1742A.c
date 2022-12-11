/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see         https://codeforces.com/problemset/problem/1742/A
 * @since       12/09/2022
 * Time         19:22:33
 * @param
 * @return
 */
#include <stdio.h>

/**
 * This function works for array sort
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       12/09/2022
 * Time         19:44:25
 * @param
 * @return
 */
void array_sort(int numbers[])
{
    for (int i = 0; i < 3; i++)
    {
        int temp;
        for (int j = i + 1; j < 3; j++)
        {
            if (numbers[i] < numbers[j])
            {
                temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
    }
}
int main()
{

    int tt;
    scanf("%d", &tt);
    while (tt--)
    {
        int integers[3];
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &integers[i]);
        }
        array_sort(integers);
        if (integers[0] == integers[1] + integers[2])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}