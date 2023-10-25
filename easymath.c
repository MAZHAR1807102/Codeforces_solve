#include<stdio.h>
int main(){
    int a, b, sum = 0;
    scanf("%d%d", &a, &b);
    while(a<=b){
        sum = sum+a;
        a = a + 1;

    }
 printf("%d", sum);
    return 0;
}
