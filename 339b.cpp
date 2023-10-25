#include<bits/stdc++.h>


#define ll long long int
using namespace std;
int main()
{
    ll a, b, val;
    vector<ll>ar;
    cin >> a >> b;
    int temp = b;
    while(temp)
    {
        cin >> val;
        ar.push_back(val);
        temp--;
    }
    ll sum = 0;
    sum = ar[0] - 1;

    for(int i = 0; i < b-1; i++)
    {
        if(ar[i] <= ar[i + 1])
            sum = sum + ar[i+1]-ar[i];
        else
            sum = sum + a - (ar[i]-ar[i+1]);
    }

    cout << sum;
}


