#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, k,m=0, t;
    cin >> t;
    while(t){
    cin >> n >> k;
    int a[n], b[n];
    for(int i = 0; i < n; i++)cin>>a[i];
    for(int i = 0; i < n; i++)cin>>b[i];
    sort(a, a+n);
    //for(int i = 0; i < n; i++)cout<<a[i]<<" ";
    //cout << endl;
    sort(b, b+n);
    //for(int i = 0; i < n; i++)cout<<b[i]<<" ";
    //cout << endl;
    int temp;
    for(int i = 0; i<n; i++)
    {
        if((a[i]<b[n-i-1]) && k){temp = a[i];a[i]=b[n-i-1];b[n-1-i]=temp;  k--;}
        //if(m==k)break;
    }
    //for(int i = 0; i < n; i++)cout<<a[i]<<" ";
    int sum = 0;
    for(int i = 0; i < n; i++)sum = sum + a[i];
    cout << sum<<endl;
    t--;
    }

}
