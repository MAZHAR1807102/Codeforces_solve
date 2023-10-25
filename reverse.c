#include<stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i, j, temp;
    for(i = 0, j = 4; i < 5; ++i, --j){
            if(i < j){
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                }
        }
    for(i = 0; i < 5; ++i){
        printf("%d  ", a[i]);
    }
    return 0;
}
