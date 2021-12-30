#include <stdio.h>
int main()
{
    int i;
    char numberOne[101], numberTwo[101], ans[101];
    scanf("%s%s",&numberOne,&numberTwo);
    for(i=0; numberOne[i] !='\0'; i++)
    {
        if(numberOne[i]!=numberTwo[i]){
            ans[i]='1';
        }else{
           ans[i]='0'; 
        }
    }
    ans[i]='\0';
    printf("%s \n",ans);
    return 0;
}
