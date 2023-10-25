#include<bits/stdc++.h>

using namespace std;
int main()
{
    string st;
    cin >> st;
    int found  = -1;
    string target = "WUB";
    do
    {
        found = st.find(target, found+1);
        if(found!=-1)
        {
            st = st.substr(0, found) + " " + st.substr(found+target.length());

        }

    }while(found != -1);
    if(st[0] == ' ')
    {
      for(int i = 1; st[i]!= '\0'; i++)
        cout<<st[i];
    }
    else
    cout << st;
}
