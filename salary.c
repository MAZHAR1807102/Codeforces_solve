#include<stdio.h>
int main()
{
    int n, hour;
    float amount, salary;
    scanf("%d", &n);
    scanf("%d", &hour);
    scanf("%f", &amount);
    salary = hour * amount;
    printf("NUMBER = %d\n", n);

    printf("SALARY = U$ %0.2f\n", salary);

    return 0;
}
