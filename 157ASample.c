#include <stdio.h>
#include <stdlib.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, ans;
        scanf("%d", &n);
        int a[18]={1, 2, 4, 5, 7, 8, 10, 11, 14, 16, 17, 19, 20, 22, 25, 26, 28, 29};
        // ans=(n-1)/18*30+a[(n+17)%18];

        printf("%d\n", (n-1)/18*30);
    }
    return 0;
}