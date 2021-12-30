// f(n) =  - 1 + 2 - 3 + .. + ( - 1)^nn
// f(4)=-1+2-3+4 = -2+4= 2
// f(5)=f(4)-5 = 2-5= -3
// f(6)=f(6)+6 = -3+6= 3
// ....... f(n)=n-(n/2)  if n=positive
// ....... f(n)=(n/2)-n if n=negetive

#include <stdio.h>
int main()
{
    long long int positiveInt, ans;
    scanf("%lld", &positiveInt);
    if (positiveInt % 2 == 0) // check positive 
    {
        ans = positiveInt - (positiveInt / 2);
    }
    else // check negative
    {
        ans = (positiveInt / 2) - positiveInt;
    }
    printf("%lld", ans);
    return 0;
}