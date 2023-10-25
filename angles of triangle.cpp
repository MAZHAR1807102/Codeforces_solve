#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    a = a * a;
    b = b * b;
    c = c * c;
    float c1 = (a + b - c) / (2*a*b);
    cout << c1 << endl;
    float C = acos(c1);
    float b1 = (a + c - b) / (2*a*c);
    cout << b1 << endl;
    float B = acos(b1);
    float a1 = (b + c - a) / (2*b*c);
    cout << a1 << endl;
    float A = acos(a1);
    cout << A <<" "<< B <<" "<< C;

    return 0;
}
