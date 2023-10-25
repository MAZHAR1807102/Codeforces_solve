#include<stdio.h>
void func1(void);

void func2(void);

int main()
{
    func2();
    printf("3");

    return 0;
}
    void func2(void)
    {


    func3();
    printf("2 ");

    }
    void func3(void)
    {
        printf("1 ");
    }
