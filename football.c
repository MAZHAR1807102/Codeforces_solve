#include<stdio.h>
#include<string.h>
int main()
{

    char s[700];
    int i, res = 0;
    scanf("%s", &s);

    for(i = 0; i < strlen(s) - 6; ++i){
        if(s[i]=='1' && s[i + 1]=='1' && s[i + 2]=='1' && s[i + 3]=='1' && s[i + 4]=='1' && s[i + 5]=='1'  && s[i + 6]=='1'){
            res = 7;
            break;
        }
        if(s[i]=='0' && s[i + 1]=='0' && s[i + 2]=='0' && s[i + 3]=='0' && s[i + 4]=='0' && s[i + 5]=='0'  && s[i + 6]=='0'){
            res = 7;
            break;
        }
    }
    if(res == 7){
        printf("YES\n");

    }
    else{
        printf("NO\n");
    }
    return 0;

}
