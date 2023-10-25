#include<stdio.h>
int main()
{
    int n, m, j, i, ara[100],count = 0, sum = 0;
    m = 0;
    scanf("%d", &n);
    while(m < n){
        for(j = 0; j<3; j++){
            scanf("%d", &ara[j]);
            }
        for(i = 0; i < 3; i++){
            if(ara[i]==1){
                count = count + 1;
            }
        }
        if(count==2 || count == 3){
            sum = sum + 1;
        }
        m = m + 1;
        count = 0;
    }
    printf("%d", sum);
    return 0;
}
