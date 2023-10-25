#include<bits/stdc++.h>

using namespace std;
int main()
{
   int n, ar[100], rese = 0, reso = 0;
   scanf("%d", &n);

   for(int i = 0; i < n; i++)
   {
       scanf("%d", &ar[i]);
   }
   int odd = 0, evn = 0;
   for(int i = 0; i < n; i++)
   {
       if(ar[i]%2 == 0)
       {
           evn++;rese = i+1;
       }
       else{odd++; reso = i + 1;}
   }
   if(evn == 1)
    printf("%d", rese);
   else
    printf("%d", reso);
}
