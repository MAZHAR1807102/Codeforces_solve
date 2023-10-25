#include<stdio.h>
#include<math.h>

int main()
{
    float d;
    float x1, y1, x2, y2;
    printf("Write here : x1, y1, x2, y2\n");
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
    float x = pow((x2- x1), 2);
    float y = pow((y2 - y1), 2);
    printf("%f\n", x);
    printf("%f\n", y);
    d = sqrt(x + y);
    printf("The distance is : %0.2f", d);

    return 0;
}
