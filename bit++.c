#include<stdio.h>
#include<string.h>
int main()
{

    char s1[151] = "X++";
    char s2[151] = "X--";
    int test_case, j, i = 1, X = 0;
    char s[151];
    printf("The test case is:");
    scanf("%d", &test_case);
    while(i <= test_case){
        printf("Enter your string");
        scanf("%s", &s);
        for(j = 0; j < 3; ++j){
            if(s[j] == s1[j]){
                X = X + 1;
            }
            else{
                X = X - 1;
            }
        }
        i++;
    }
    printf("%d\n", X);
    return 0;
}
