#include<bits/stdc++.h>

using namespace std;

int main()
{
    char t[] = "Tetrahedron";
    char c[] = "Cube";
    char o[] = "Octahedron";
    char d[] = "Dodecahedron";
    char e[] = "Icosahedron";

    int n, sum = 0;
    char st[20];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%s", &st);
      //  cout << st << endl;
        if(strcmp(st,t) == 0)
        {
              sum = sum + 4;
             // cout << sum << endl;
              //cout<< 'T' << endl;
        }

        else if(strcmp(st,c) == 0)
        {
             sum = sum + 6;
            // cout << sum << endl;
              //cout<< 'C' << endl;
        }

        else if(strcmp(st, o) == 0)
           {
               sum = sum + 8;
             //  cout << sum << endl;
               // cout<< 'O' << endl;
           }
        else if(strcmp(st,d) == 0){
            sum = sum + 12;
            //cout << sum  << endl;
             //cout<< 'D' << endl;
        }
        else{
            sum = sum  + 20;
           // cout << sum << endl;
             //cout<< 'I' << endl;
        }
    }
    printf("%d", sum);
    return 0;
}
