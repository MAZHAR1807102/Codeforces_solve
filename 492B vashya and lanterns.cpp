#include<bits/stdc++.h>

using namespace std;
bool comp(double a, double b)
{
    return (a < b);
}
int main()
{
    int n;

    double l;
    scanf("%d%lf", &n, &l);
    double ar[n];
    for(int i = 0; i < n; i++)
        scanf("%lf", &ar[i]);
    sort(ar, ar + n);
        double a = ar[0]-0;
        double b = l - ar[n-1];
    double diff1 = max(a, b, comp);
    double diff2 = .000000000000;
    for(int i = 0; i < n; i++)
    {
        if(ar[i+1]-ar[i] > diff2)
        {
            diff2 = ar[i+1]-ar[i];
        }
    }
    if(diff1 > (diff2/2))
        printf("%lf", diff1);
    else
        printf("%lf", (diff2 / 2.00000));
   return 0;

}
