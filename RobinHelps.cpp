#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t, n, k, a[50],sum,cnt;
    cin >> t;
    while(t)
    {
        cin >> n >> k;
        cnt=0;sum = 0;
        for(int i = 0 ; i < n; i++)
            cin >> a[i];
        for(int i = 0 ; i < n; i++){
            if(a[i]==0 && sum >= 1){sum--;cnt++;}
            if(a[i]>= k)sum = sum + a[i];
        }
        //if(cnt>sum)cnt=sum;
        cout << cnt<<endl;
        t--;
    }
}
