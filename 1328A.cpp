#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t, a, b, rs = 0;
    scanf("%d", &t);
    while(t)
    {
        scanf("%d%d", &a, &b);
        if(a%b == 0)
        {
          rs = 0;
        }
        else
        {
            int temp =((a/b) + 1 ) * b;
            rs = temp - a;
        }

        printf("%d\n", rs);
        rs = 0;
        t--;
    }

}
