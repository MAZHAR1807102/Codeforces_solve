#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ar[] = {100, 20, 10, 5, 1};
    int n;
    scanf("%d", &n);
    int i = 0, cnt = 0, temp;
    for(int j = 0; j < n;)
    {
        if(n >= ar[i])
        {
       //  printf("frst i = %d and n =  %d\n",i, ar[i]);
            n = n - ar[i];
            cnt++;
         //   printf("n = %d\n", n);
        }
        else{

            i=i+1;
        // printf("else con = %d\n", i);
        }
    }
    printf("%d", cnt);
}
