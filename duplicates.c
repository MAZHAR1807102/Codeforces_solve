#include<stdio.h>
int main()
{
    int a[2000], n, i, j, temp;
    int count = 1;
    scanf("%d", &n);
    for(i = 0; i < n; ++i){
        scanf("%d", &a[i]);
    }
    for(j = 0; j < n; ++j){
        for(i = 0; i < n - j; ++i){
            if(a[i + 1] < a[i]){
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
    for(i = 0; i < n; ++i){
            if(a[i] != 0){
            for( j = 0; j < n - i; ++j){

                 if( a[i] == a[i + 1]){
                    count = count + 1;
              }
        else{
            count = 1;
        }
        a[i] = 0;
            }

        }
        printf("%d %d\n", a[i], count);
    }

    return 0;
}
