#include<iostream>
using namespace std;
int main()
{
int a=0,k=1,b;
cin >> b;
    cout << a<< endl;
    cout << k << endl;
    for (int I=3;I<=b;I++){
    int s=a+k;
    cout << s << endl;
    a=k;
    k=s;
    }
    return 0;
}