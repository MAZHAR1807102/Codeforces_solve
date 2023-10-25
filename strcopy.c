#include<stdio.h>
#include<string.h>
int main()
{
    char name[20] = "Mazharul Islam";
    printf("My name is %s", name);


    name[4] = 'z';
    printf("My name is %s", name);


    char food[6]= ",meals";
    printf("My favourite food is %s", food);

    strcpy(food, " Bears");
    printf("My favourite food is %s", food);



     return 0;
}
