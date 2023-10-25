#include<stdio.h>
#include<string.h>
int main()
{
    char s[100], temp;
    int i, j, res, count = 0;
    int length = 0;
    scanf("%s", &s);
    length = strlen(s);
    for(i = 0; i < length; ++i){
        for(j = 0; j < length - i; ++j){
            if(s[j] > s[j + 1]){
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    for( i = 0; i < length; ++i){
        if(s[i] != s[i + 1]){
            count = count;
        }
        else{
            ++count;
        }
    }
    res = length - count;
    if(res % 2==0){
        printf("CHAT WITH HER");
    }
    else{
        printf("IGNORE HIM");
    }

    return 0;
}
