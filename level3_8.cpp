#include<iostream>
using namespace std;
int main()
{
int a,i=1,s=0;
    cout << "eded daxil edin" << endl;
    cin >> a;
    while (a>0){
    i=a%10;
    a/=10;
    s=s*10+i;
    }
    cout << s << endl;
    return 0;
}