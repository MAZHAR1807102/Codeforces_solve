#include<stdio.h>
int main()
{
    char str1[] = "bangla";
    char str2[] = "desh";
    char str3[12];


    int i, j;
    for(i = 0, j = 0; i < 6; ++i, ++j){
      str3[j] = str1[i];
    }

    for(j = 6, i = 0; i < 4; ++j, ++i){
        str3[j] = str2[i];


    }
     str3[j] = '\0';
    printf("%s", str3);

    return 0;
}
