#include<stdio.h>
int main()
{
    int i;
    char a[20] = {'b', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};
    for( i = 0; i != '\0'; ++i){
        if(a[i] >= 97 && a[i] <= 122){
        a[i] = 'A' + (a[i] - 'a');
        }


    }
    printf("%s", a);
    return 0;
}
