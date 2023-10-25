#include<stdio.h>
int main()
{
    int n, r, t, s, u, sum = 0;
    scanf("%d", &n);
    sum = sum + n;

    r =n / 3;
    sum = sum + r;
    t = n%3 + r;
    s = t / 3;
    sum = sum + s;
    u = s + t % 3;
    if( u == 2){
        printf("%d", sum + 1);

    }
    else
        printf("%d", sum);
    return 0;
}
