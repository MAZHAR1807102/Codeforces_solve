#include<bits/stdc++.h>
#define ll long long int
#define sc scanf
#define pf printf

using namespace std;



int main()
{
    vector<ll> a, a1;
    vector<ll>b, b1;
    ll t, n;
    ll rcnt = 0,cnt1 = 0, cnt2 = 0;
    sc("%lld", &t);
   for(int j = 0; j < t; j++){
        sc("%lld", &n);
        ll val;
        for(ll i = 0; i < n; i++)
        {
            sc("%lld", &val);
            a.push_back(val);
            a1.push_back(val);
        }
        for(ll i = 0; i < n; i++)
        {
            sc("%lld", &val);
            b.push_back(val);
            b1.push_back(val);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end() );
        for(ll i = 0; i < n; i++)
        {

            if(a[0]<a1[i])
            {
                cnt1 = a1[i] - a[0];
            }
            if(b[0]<b1[i])
            {
                cnt2 = b1[i] - b[0];
            }
            cout << cnt1 << "  " << cnt2 << endl;
            rcnt = rcnt + max(cnt1,cnt2);
            cnt2 = 0;
            cnt1 = 0;
        }
        pf("%lld\n", rcnt);
        pf("%lld\n", cnt1);
        pf("%lld\n", cnt2);
        rcnt = 0;
        pf("%lld\n", rcnt);
   }
    return 0;
}
