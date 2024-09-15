#include<bits/stdc++.h>

using namespace std;
int main()
{
    string str;
  //  char str1[101];

    cin >> str;
    //printf("%d", str.length());
    for(int i = 0; i<str.length();i++)
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
     int j = 1, cnt = 0;
    for(int i = 0; i<str.length();i++)
        if(str[i]!=97 && str[i]!=101 && str[i]!=105 && str[i]!=111 && str[i]!=117 && str[i]!=121)
            {   //cout << str[i] << endl;
           cnt++;
                }
                cnt=(cnt*2);
                char str1[cnt];
                 str1[0]='.';
    for(int i = 0; i<str.length();i++)
        if(str[i]!=97 && str[i]!=101 && str[i]!=105 && str[i]!=111 && str[i]!=117 && str[i]!=121)
            {   //cout << str[i] << endl;
            str1[j]=str[i];j+=2;
                }
    //n = sizeof(str1);
    //cout << j <<"   "<< cnt;
   // for(int i = 0; str1[i] != '\0'; i++)n++;
   // cout << n;
   // strcpy(str1, str);
    for(int i = 2; i < cnt;i+=2)
    {
       str1[i] = '.';
    }
    for(int i = 0; i < cnt; i++)printf("%c", str1[i]);


    }

