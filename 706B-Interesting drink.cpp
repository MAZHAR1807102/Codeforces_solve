#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main(void)
{
    ll n,q;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    cin >> q;
   ll x;

    //ll n = sizeof(a) / sizeof(a[0]);
    sort(a, a+n);
   // for(int i = 0; i < n; i++)
   //     cout << a[i] << " ";
    //    cout << endl;
    while(q){
    cin >> x;
    ll i , cnt=0;
    cnt = upper_bound(a, a+n, x)-a;
  /*  for(i = n-1; i >=0; i--){
        if(x>=a[i])cnt++;

    }*/
    cout << cnt<<endl;
    q--;
    }
    return 0;
}

