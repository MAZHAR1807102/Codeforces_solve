#include<stdio.h>
int main()
{
    int N, M, i, step, j, m, temp, n, ara[200];
    scanf("%d", &N);
    for(i =0; i < n; i++){

        scanf("%d", &ara[i]);
    }
    for(step = 0 ; step < n - 1; ++step)
    for(j = 0; j < n - step - 1; ++j) {
        if(ara[i]>ara[i+1]){
                temp = ara[i];
        ara[i] = ara[i + 1];
        temp = ara[i + 1];
        }
    }
    for(m = 0; m < N; ++m){
        for(n = m+1; n < n; ++n){
            if(ara[m] + ara[n] == M){
                printf("yes");

            }
            }
        }
    }


    return 0;
}
