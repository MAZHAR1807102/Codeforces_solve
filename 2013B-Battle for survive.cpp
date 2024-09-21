#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
        int t;
    cin >> t;
    ll n, r , sum;
    while(t)
    {
        cin >> n;
        ll a[n], sum = 0;
        for(int i = 0; i < n; i++)cin>>a[i];
        //sum = 0;
        if(n==2){cout << a[1]-a[0]<<endl;}
        else{
            for(int i = 0; i < n-2; i++)sum = sum + a[i];
            sum = a[n-1]-(a[n-2]-sum);
            cout << sum << endl;
        }

        t--;
    }
}
