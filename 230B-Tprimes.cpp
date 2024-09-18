#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mx 1000001

ll N;



int main()
{
   // ll N;
   int t;

    vector<bool>isPrime(mx,1);
    isPrime[0]=isPrime[1]=false;
    for(ll i = 2; i <= mx; ++i)
    {
        if(isPrime[i] == true)
        {
            for(ll j = 2 *i; j <= mx; j+= i)
            {
                isPrime[j]=false;
            }
        }
    }

    cin >> t;
    while(t){
    cin>> N;
    ll r = sqrt(N);
    //cout << r << endl;

    for(int i = r; i >= 1 ; i--)
    {
      //  cout << isPrime[i] << endl;
        if((isPrime[i]==true) && (r*r == N)){cout << "YES"<<endl;break;}
        else {cout << "NO"<<endl;break;}

    }
    t--;
    }
}
