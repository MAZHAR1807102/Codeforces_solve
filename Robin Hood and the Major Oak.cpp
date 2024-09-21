#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t, n, k,i,sum;
    cin >> t;
    while(t)
    {
        cin >> n >> k;
        i=n;
        sum=0;
        sum = (k*n)-((k-1)*k)/2;
        if(sum%2==0)cout << "YES"<<endl;
        else cout << "NO"<<endl;
        cout <<"sum = "<< sum<<endl;
        t--;
    }
}
