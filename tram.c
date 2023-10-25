#include<stdio.h>
int main()
{
   int n, i , k = 0;
   int a[10000], b[10000], ans, max = 0;
   scanf("%d", &n);
   for(i = 0; i < n; ++i){
    scanf("%d%d", &a[i], &b[i]);
   }
   a[0] = k;
   for(i = 0; i < n; ++i){
        ans = b[i] - a[i] + k;
        k = ans;
        if(ans > max){
            max = ans;
        }
   }

   printf("%d\n", max);
   return 0;
}
