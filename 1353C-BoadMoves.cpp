#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n, res =0;
    cin >> t;
    while(t){
            cin >> n;
            n = n/2;;
            if( n>=1){
            res = (n*(n+1)*(2*n+1))/6;
            //res = res / 6;
            res = res*8;
            cout << res<<endl;
            }
            else cout << 0<<endl;
            t--;
    }
}
