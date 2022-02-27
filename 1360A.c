#include <stdio.h>
int main()
{
    int t, a, b, onePart, areaOfSquareLand;
    scanf("%d", &t);
    while (t--)
    {
        areaOfSquareLand = 0;
        onePart = 0;
        scanf("%d%d", &a, &b);
        if (a == b)
        { // equal both side just use rule
            onePart = (a + a);
            areaOfSquareLand = onePart * onePart;
        }
        else if (a > b)
        { // if a bigger than b
            if (a % b == 0)
            { // b divisible by a mins a*a
                areaOfSquareLand = a * a;
            }
            else
            { // not divisible so divided +1
                if (b * 2 > a)
                {
                    areaOfSquareLand = b * b * 4;
                }
                else
                {
                    onePart = ((a + b) / b) * b;
                    areaOfSquareLand = onePart * onePart;
                }
            }
        }
        else
        { // if b bigger than a
            if (b % a == 0)
            { // a divisible by b mins b*b
                areaOfSquareLand = b * b;
            }
            else
            { // not divisible so divided +1 * a = one side

                if (a * 2 > b)
                {
                    areaOfSquareLand = a * a * 4;
                }
                else
                {
                    onePart = ((b + a) / a) * a;
                    areaOfSquareLand = onePart * onePart;
                }
            }
        }
        printf("%d\n", areaOfSquareLand);
    }

    return 0;
}