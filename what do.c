#include<stdio.h>
#include<math.h>
int main()
{
    double n;
    double p, res;
    double k;
   while(scanf("%lf%lf", &n, &p)!=EOF){
    res = pow(p, 1/n);
    k = res;
    printf("%0.0lf\n", k);
   }
    return 0;
}

