#include<stdio.h>
#include<string.h>
int main()
{
    char word[101];
    int length, i;
    gets(word);
    length = strlen(word);
    for(i = 0; i < length; ++i)
    {
        if(word[i] == 'H' || word[i] == 'Q' || word[i] == '9' || word[i] == '+')
        {
            printf("YES\n");
            break;
        }
        else{
            printf("NO\n");
            break;
        }

    }
    return 0;
}
