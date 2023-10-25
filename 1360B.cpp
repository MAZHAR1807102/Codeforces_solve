#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, val, temp, dif;
    vector<int>s;


    while(t)
    {
        cin >> n;

        for(int i = 0; i < n; i++)
        {
            cin >> val;
            s.push_back(val);
        }
        sort(s.begin(), s.end());
        for(int i = 0; i < n-1; i++)
        {
            temp = s[i+1] - s[i];
            if(temp < dif)
                dif = temp;
        }
        cout << dif << endl;
        dif = 1000;
        s.clear();
        t--;
    }
    return 0;
}
