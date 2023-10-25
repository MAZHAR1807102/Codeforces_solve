#include<stdio.h>
int main()
{
    int i, j, count, g;
    char a[200];
    gets(a);


        count = 1;
        for(j = 0; a[j] != '\0'; ++j){
            if(a[j]==a[j+1]){
                ++count;
            }
                else {
                    count = 1;
                }
        }
        if(count ==7){
                g==1;
            }

    if(g==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
