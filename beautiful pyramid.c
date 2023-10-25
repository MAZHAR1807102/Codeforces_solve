#include<stdio.h>
int main()
{
    long long int a, b, c;
    long long int m, n, o;
    while(1){
        scanf("%lld%lld%lld", &a, &b, &c);
        if( a == 0 && b == 0 && c == 0){
            return 0;
        }
        else{
            m = a * a;
            n = b * b;
            o = c * c;
            if(m + n == o || m + o == n || n + o == m){
                printf("right\n");
            }
            else{
                printf("wrong\n");
            }
        }
    }
}
