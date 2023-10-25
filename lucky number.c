#include<stdio.h>
int main()
{
    int n, res = 0, ress = 0;

    scanf("%d", &n);

    if( n % 4 == 0 || n % 7 == 0)
    {
        ress = 1;
    }

    while(n  > 0)
    {
        if(n % 10 == 7 || n % 10 == 4)
        {
            res = 2;
        }
        else
        {
            res = 3;
        }
        n = n / 10;
    }



    if(ress == 1 || res == 2)
    {
        printf("yes\n");

    }
    else
    {
        printf("no\n");
    }
    return 0;

}
