#include<stdio.h>
int main()
{
   int n, a, total;
   int s[5] = {0};
   scanf("%d", &n);
    while(n--){
        scanf("%d", &a);
        s[a] += 1;
    }
    total = s[4] + s[3] + s[2]/2;
    s[1] -= s[3];
    if(s[2] % 2 == 1){
        total += 1;
        s[1] -= 2;
    }
    if(s[1] > 0){
        total += (s[1] + 3)/4;
        }
    printf("%d\n", total);
    return 0;

}
