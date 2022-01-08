// 5+10+15+20 .........n
// 5*1+5*2+5*3 ......5(n)
// 5(1+2+3+....n)
// 5(n*n+1/2)  nth summation

#include <stdio.h>
int main()
{
    int n, k, remainMinutesToSoveProblem, i, takeTimeToSolveProblem;
    scanf("%d%d", &n, &k);
    remainMinutesToSoveProblem = 240 - k; //content start time= 20:00 pm mid night mins 24:00pm start to end time minute 60*4=240 
    for (i = n; i > 0; i--)
    {
        takeTimeToSolveProblem = 5 * ((i * (i + 1)) / 2);
        if (takeTimeToSolveProblem <= remainMinutesToSoveProblem)
        {
            break;
        }
    }
    printf("%d \n", i);

    return 0;
}