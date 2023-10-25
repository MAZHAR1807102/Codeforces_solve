#include<stdio.h>
int main(){


    char name[20] = "Mazharul Islam";

    printf("My name is %s\n", name);

    name[4] = 'z';
    printf("my name is %s\n", name);

    char food[5] = "soda";
    printf("My favourite food is %s\n", food);

    strcpy( food, "Mojo");
    printf("my favourite food is %s\n", food);
return 0;
}
