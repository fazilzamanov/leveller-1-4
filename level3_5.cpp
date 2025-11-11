#include<iostream>
using namespace std;
int main()
{
int a,i=0,s=1;
    cout << "eded daxil edin" << endl;
    cin >> a;
    while (a>0){
    i=i+a%10;
    a/=10;
    }
    cout << i << endl;
    return 0;
}