#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll min_x(ll n, vector<ll>& a) {
    ll Sum = 0;
    for (ll i = 0; i < n; ++i) {
        Sum += a[i];
    }

    vector<ll> T(n);
    for (ll i = 0; i < n; ++i) {
        T[i] = 2 * a[i] * n - Sum;
    }

    sort(T.begin(), T.end());

    ll unhappy_count = 0;
    for (ll i = 0; i < n; ++i) {
        if (T[i] < 0) {
            unhappy_count++;
        }
    }
    if (unhappy_count > n / 2) {
        return 0;
    }
    for (ll i = 0; i < n; ++i) {
        if (i > n / 2) {
            break;
        }
        ll x = T[i] + 1;
        if (x > 0) {
            return x;
        }
    }

    return -1;
}

int main() {
ll n,  t, res, value;
vector<ll>a(n);
cin >> t;
while(t)
{
    cin >>n;
    for(ll i = 0; i < n; i++){ cin >> value;
     a.push_back(value);}
    res = min_x(n,a);
    cout << res << endl;
    t--;
}
}
