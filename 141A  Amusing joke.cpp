#include<bits/stdc++.h>

using namespace std;
int main()
{
    char owner[201];
    char guest[101];
    char sec[101];

    // scanf("%s", &owner);
    //scanf("%s", &guest);
    //scanf("%s", &sec);

    gets(owner);
    gets(guest);
    gets(sec);
    strcat(owner, guest);
    //printf("%s\n", owner);
    int i = 0;
    while(owner[i] != '\0')
    {
        i++;
    }
    int k = 0;
            while(sec[k] != '\0')
    {
        k++;
    }
    sort(owner, owner + i);
    // printf("%s\n", owner);
//ZOCNDOLTBZKQLTBOLDEGXRHZGTTPBJBLSJCVSVXISQZCSFDEBXRCSGBGTHWOVIXYHACAGBRYBKBJAEPIQZHVEGLYH

    sort(sec, sec + i);
    // printf("%s\n", sec);
    int cnt = 0;
    if(i !=k)
    {
        printf("NO");
        return 0;
    }

    for(int j = 0; j < 100; j++ )
    {
        if(owner[j]==sec[j])
            cnt++;
        else
            break;
    }
    // printf("%d\n", cnt);
    if(cnt>=i)
        printf("YES");
    else
        printf("NO");
    return 0;
}
