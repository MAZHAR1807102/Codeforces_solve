#include<stdio.h>
#include<math.h>
int main()
{
    int t, i;
    long long int a, b, c;
    long long int m, n, o;
    scanf("%d", &t);
    for( i = 1; i <= t; ++i){
        scanf("%lld%lld%lld", &a, &b, &c);
        m = a * a;
        n = b * b;
        o = c * c;
        if(m + n == o || m + o == n || n + o == m){
            printf("Case %d: yes\n", i);
        }
        else
            printf("Case %d: no\n", i);
    }

}


