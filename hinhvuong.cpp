#include<iostream>
using namespace std;
int main()
{
    int a, i, j;
    cout << "Ban hay nhap do dai canh : ";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
            cout << "*  ";  //luu y,co mot khoang trong o day
        cout << "\n";
    }
    system("pause");

}
