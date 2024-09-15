#include<bits/stdc++.h>

using namespace std;

int main()
{
    char st1[] = {'h', 'e', 'l', 'l', 'o'};
    string st;
    cin >> st;
    int i,j;
    for(i = 0, j = 0; i < st.length(); i++)
    {
        if(st1[j]==st[i])j++;
    }
    //cout << j;
    if(j==5)cout<<"YES";
    else cout <<"NO";
}
