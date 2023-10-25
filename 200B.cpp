#include<bits/stdc++.h>

#define ll double
using namespace std;
int main()
{
 ll a;
 vector<ll>vec;

 cin  >> a;
 ll temp = a;
  ll val;
 while(temp)
 {
     cin >> val;
     vec.push_back(val);
     temp--;
 }
 ll sum = 0;
 for(int i = 0; i < a; i++)
 {
     sum = sum + (vec[i]/100);
 }
 ll ans = (sum / a) * 100;
 printf("%lf", ans);

}
