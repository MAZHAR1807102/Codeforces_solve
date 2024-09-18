#include<bits/stdc++.h>

using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt1 = 0, cnt2=0;
if(s[0]>=97 && s[0]<=122){
    for(int i = 1; i < s.length(); i++){if(s[i]>=65 && s[i]<=90)cnt1++;}
    if(cnt1==(s.length()-1)){s[0]=s[0]-32;for(int i = 1 ; i < s.length(); i++)s[i] = s[i]+32;}
    cout << s;
    }
    else if(s[0]>=65 && s[0]<=90){
        for(int i = 1; i < s.length(); i++){if(s[i]>=65 && s[i]<=90)cnt2++;}
    if(cnt2==(s.length()-1)){for(int i = 0 ; i < s.length(); i++)s[i] = s[i]+32;}
    cout << s;
    }
    else if((s[0]>=97 && s[0]<=122) && s.length()==1){s[0]=s[0]-32;cout << s;}
    else cout << s;
}
