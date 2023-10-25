#include<stdio.h>
int main()
{
    int coin[101];
    int n, i, temp, sum = 0;
    int average = 0, count = 0;

    scanf("%d", &n);
    for(i = 0; i < n; ++i)
    {
        scanf("%d", &coin[i]);
    }
    int j;
    for(j = 0; j < n; ++j){

        for(i = 0; i < n - j; ++i)
        {
            if(coin[i] > coin[i + 1])
            {
                temp = coin[i];
                coin[i] = coin[i + 1];
                coin[i + 1] = temp;
            }
        }
    }

    for(i = 0; i < n; ++i)
    {
    sum = sum + coin[i];
    }

    average = sum / 2;
    sum = 0;

    for(i = 0; i < n; ++i)
    {
        sum = sum + coin[i];

        count++;

        if(sum > average){
            break;
        }

    }

    printf("%d", count);

    return 0;

}
