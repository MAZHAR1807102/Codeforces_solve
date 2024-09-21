#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    ll n, x, y,cnt;
    while(t)
    {
        cin >> n >> x >> y;

        cnt = 0;
            if(x<y){if(n%x==0){cnt=n/x; }
            else{cnt = n / x + 1;}}
            else{if(n%y==0){cnt=n/y; }
            else{cnt = n / y + 1;}}
        cout << cnt<<endl;
        t--;
    }
}
