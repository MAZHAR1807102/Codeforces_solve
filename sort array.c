#include<stdio.h>
int main()
{

    int ara[200];
    int i, n, step, j, temp;
    int k = 0, l, b1, b2;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d", &ara[i]);

    }
    for(step = 0; step < n - 1; ++step)
    for(j = 0; j < n - step - 1; ++j){
        if(ara[i]>ara[i+1]){
            temp = ara[i];
            ara[i] = ara[i + 1];
            temp = ara[i + 1];
        }
    }
    while(k < n){
        for(l = k + 1; l < n; ++l){
            if(ara[k] + ara[l] == m){
                b1 = ara[k];
                b2 = ara[l];
                m = abs(ara[k] - ara[l]);
            }
        }
        ++k;
    }
    return 0;
}
