#include<stdio.h>
int main()
{
    int j, i, n, k, size, ara[200], count = 0;
    scanf("%d%d", &n, &k);

    size = n;
    i = 0;
    while(i<size){
        scanf("%d", &ara[i]);
        i = i+1;
    }
    for(j = 0; j < n; j++){

        if(ara[j]>=ara[k-1] && ara[j] != 0){
            count = count + 1;

        }
    }
    printf("%d\n", count);

    return 0;
}
