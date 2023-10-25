//recursion factorial
#include<stdio.h>
int main()

{
   int factorial = fact(4);
    printf("%d", factorial);
}
    int fact(int n){

    if(n==1){
        return 1;
    }
    else{
        return n * fact(n-1);
    }

    }

