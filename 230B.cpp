#include<bits/stdc++.h>

#define ll long long int
using namespace std;

//It is stuck on TLE

int main()
{
    ll n;
    scanf("%lld", &n);
    ll val;
    int j = 0, cnt = 0;
    while(n)
    {
        cnt = 0;
        scanf("%lld", &val);
        for(int i = 1; i <= val; i++)
        {
            if(val % i == 0)
                cnt++;
        }
        if(cnt == 3)
            printf("YES\n");
        else
            printf("NO\n");

        n--;
        j++;
    }
}
