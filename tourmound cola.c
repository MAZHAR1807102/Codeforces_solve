#include<stdio.h>
int main()
{
    int n, p, q, r, sum = 0;
    while(1){
        scanf("%d", &n);
        if(n == 0){
            return 0;
        }
        else{
            while(n >= 3){
                p = n / 3;
                q = n % 3;
                r = p + q;
                n = r;
                sum = sum + p;
            }
            if(n == 2){
                printf("%d\n", sum + 1);
            }
            else{
                printf("%d\n", sum);
            }
        }
        sum = 0;
    }
}
