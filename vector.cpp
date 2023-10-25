#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 3;
    vector<vector<int> >maz(n,vector<int>(n,4));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << maz[i][j] <<" ";
        }
        cout << endl;
    }
}
