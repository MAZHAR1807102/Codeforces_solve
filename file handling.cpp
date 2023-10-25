#include<bits/stdc++.h>

using namespace std;

int main()
{
    char arr[100];
    //cout << "write down your name:";
   // cin.getline(arr, 100);
    ofstream file;
file.open("text.txt");
    /*file << arr;
    file.close();
    if(arr != NULL)
        cout <<"Successfully written in the file"<<endl<<endl;
        char arr1[100];
        cout << "The output array is:";*/

char arr1[100];
        ifstream outfile("text.txt", ios::ate);
        file >> arr1;
         outfile.getline(arr1, 100);
        cout<< arr1<<endl;
        if(arr1 != NULL)
            cout << "Successfully gain the value"<<endl;

}
