#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=n; i  >= 0; i--)
    {
        for(int j = (i*2)-1; j >= 0;j--)
            cout<<" ";
        for(int k = 0; k <=(n-i);k++)
        {
            if(k==0)cout << k;
            else cout<<" "<<k;
        }

        for(int m = n-i-1; m >= 0;m--)
            if(i!=n )cout <<" "<< m;
           // else cout <<m;
     //   for(int l = i; l >= 0;l--)
      //      cout<<" ";
        cout<<endl;
    }
        for(int i=0; i  < n; i++)
    {
        for(int j = (i*2)+1; j >= 0;j--)
            cout<<" ";
        for(int k = 0; k <(n-i-1);k++)
             {
            //if(k==0)cout << k;
             cout<<k<<" ";
        }
       // cout << " ";
        for(int m = n-i-1; m >= 0;m--)
            if(i!=n && m!=0)cout<< m << " ";
            else cout << m;

     //   for(int l = i; l >= 0;l--)
      //      cout<<" ";
        cout<<endl;
    }
}
