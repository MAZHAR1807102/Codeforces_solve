#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    ll m=0,cnt=0;
    cin >> n;

    while(n>0)
    {
        //m = 0;
        for(int i=0; ;++i)
        {
            m = pow(2,i);
            //cout << "calculating m : " << m<<endl;
            if(n<m){
                m=pow(2,(i-1));
              // cout << "m in if : "<<m << endl;
                n=n-m;
               // cout << "n in if : "<<n << endl;
                cnt++;
               // cout << "cnt in if : "<<cnt << endl;
                break;
            }
        }
    }
    cout << cnt;

}
