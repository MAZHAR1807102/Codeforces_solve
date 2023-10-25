#include<stdio.h>
int main()
{
    int i, j, k, m;
    int ar[10] = {0,1,2,3,4,5,6,7,8,9,};
    int ar2[10];
    for(i = 0, j = 9; i < 10; ++i, --j){

        ar2[j] = ar[i];
    }
    for(k = 0; k < 10; ++k){
        ar[k] = ar2[k];
    }
    for(m = 0; m < 10; ++m){
        printf("%d", ar[m]);
    }
    return 0;
}
