#include<stdio.h>
int main()
{
    int a, i, n, c;
    scanf("%d", &n);
    char word[200];

    for(i=0; i<n;++i){
    scanf("%s", &word);


       if(strlen(word)>10){
             a = strlen(word);
            printf("%c", word[0]);
            printf("%d", a-2);
            printf("%c", word[a-1]);
            printf("\n");
       }
       else {
           printf("%s", word);
           printf("\n");
       }
    }
    return 0;
}
