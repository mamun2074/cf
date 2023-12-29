/**
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see         https://codeforces.com/problemset/problem/540/A
 * @since       12/14/2022
 * Time         20:06:31
 * @param
 * @return
 */

/**
 * This function return minium number of move
 *
 * @author      Md. Al-Mahmud <mamun120520@gmail.com>
 * @version     1.0
 * @see
 * @since       12/16/2022
 * Time         23:03:00
 * @param
 * @return
 */
int no_of_move(char original_state[], char open_state[], int n)
{
    int move_no = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        int ori = original_state[i] - '0';
        int open = open_state[i] - '0';
        if (ori < open)
        {
            temp = open;
            open = ori;
            ori = temp;
        }
        if ((ori - open) > 5)
        {
            move_no = move_no + ((open + 10) - ori);
        }
        else
        {
            move_no = move_no + (ori - open);
        }
    }
    return move_no;
}
// End
#include <stdio.h>
#define MAX_LIMIT 1001
int main()
{
    int n;
    char original_digits[MAX_LIMIT];
    char open_digits[MAX_LIMIT];
    scanf("%d", &n);
    scanf("%s", &original_digits);
    scanf("%s", &open_digits);
    printf("%d", no_of_move(original_digits, open_digits, n));

    return 0;
}
