#include<iostream>
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n, sum = 0, cnt=0;
    scanf("%d", &n);
    int ar[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for(int i = 0; i < n; i++)
        sum = sum + ar[i];
        int half = (sum / 2) + 1;
  //      printf("%d\n", half);
  //  printf("%d\n", sum);
    sort(ar, ar + n);
  //  for(int i = 0; i < n; i++)
  //      printf("%d ", ar[i]);
   // printf("\n");
    sum = 0;
    for(int i=n-1; i>=0;i--)
    {
        sum = sum + ar[i];
        cnt++;
        if(sum >= half)break;
    }
    printf("%d", cnt);
}
