#include<stdio.h>
int main()
{
    int w;
    scanf("%d", &w);
    if(w%2==0 && w>=4){
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}
