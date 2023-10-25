#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    char st[101];
    free(st);
//scanf("%s", &st);
    for(int i = 0; i <= n; i++)
        scanf("%c", &st[i]);
    if(n<26)
        {
            printf("NO");
            return 0;
        }
        char in;
    int i = 0;
    while(st[i] != '\0')
    {
        in = st[i];
       // printf("%c\n", in);
        if(in >= 65 && in <= 90)
        {
            in = in + 32;
            st[i] = in;
           // printf("lowercase = %c\n", st[i]);
        }
        else
            st[i] = in;
       // printf("%c\n", st[i]);

i++;
    }
   // printf("%s", st);
    sort(st, st+n+1);
    //printf("%s", st);

    for(int i = 0; i < n; i++)
    {
        if(st[i] != st[i+1]){
               // printf("%c", st[i]);
            cnt++;
        }
    }
    //printf(" count  = %d\n", cnt);
    if(cnt == 26)
    {
         printf("YES");
         return 0;
    }
    else{
        printf("NO");
        return 0;
    }
}
