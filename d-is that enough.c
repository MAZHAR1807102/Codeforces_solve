#include<stdio.h>
#include<math.h>
int main()
{
    double r, k, result, pi;
    double sq, cir;
    int i, T;
    pi = 2*acos(0.0);
    scanf("%d", &T);
   for( i = 1; i <= T; i++){
    scanf("%lf", &r);
    k = (2 * r);
    sq = k * k;
    cir = pi * r * r;
    result = sq - cir;
    printf("Case %d: %0.2lf\n", i, result);
   }

}

