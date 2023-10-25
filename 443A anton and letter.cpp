#include<bits/stdc++.h>

using namespace std;
string s3;
bool r = false;
void splitString(string str)
{
    // string alpha, num, special;
    for (int i=0; i<str.length(); i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z'))
        {
            s3.push_back(str[i]);
            r = true;
        }
    }
   // cout << s3 << endl;
}

int main()
{
    char s1[1001];
    gets(s1);
    splitString(s1);
    int i = 0, n = 0;
    while(s3[i] != '\0')
    {
        n++;
        i++;
    }
//cout << n << endl;
    /* int j = 0;
     for(int k = 0; k < n; k++)
     {
         if(s1[k] >= 'a' && s1[k] <= 'z')
         {
             cout << s1[i] << endl;
             s2.push_back(s1[i]);
         }
     }*/
    // char s[] = {'\0'};
    int cnt;
    if(r == true)
        cnt = 1;
    else
        cnt = 0;
    sort(s3.begin(), s3.end());
    //cout << s3 << endl;
    for(int k = 0; k+1 < n; k++)
    {
        if(s3[k] != s3[k+1])
        {
            ++cnt;
        }

    }
    printf("%d", cnt);

}
