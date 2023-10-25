#include<stdio.h>
int main()
{

    int i, j, k, l, t, temp;
    int a[200];
    scanf("%d", &t);
    for(i = 1; i <= t; i++){
        for(j = 0; j < 3; ++j){
        scanf("%d", &a[j]);
        }

        for( k = 0; k < 3; ++k){
            for(l = 0; l < 3 - l; ++l){
                if(a[l]>a[l+1]){
                    a[l] = temp;
                    a[l] = a[l + 1];
                    a[l + 1] = temp;
                }
            }
        }
        if((a[0]*a[0]) + (a[1] * a[1]) == (a[2] * a[2])){
            printf("Case %d: Yes", i);
        }
        else
            printf("Case %d: No", i);
    }

}
