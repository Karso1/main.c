#include<stdio.h>
long long f[10005]={0};
int main() {
    int n;
    scanf("%d", &n);
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i <= n; i++)

    {
        f[i]=f[i-1]+f[i-1];
        f[i] %= 2333333;
    }
    printf("%lld\n",f[n]);
    return 0;
}