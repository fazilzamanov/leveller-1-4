#include<iostream>
using namespace std;

int main()
{
int k,I=1,s=0;
    cout << "eded daxil edin" << endl;
    cin >> k;
    int a=k;
    while (a>0){
    I=a%10;
    a/=10;
    s=s*10+I;
    }
    cout << s << endl;
    if(k==s){
    cout << "polindromdur" << endl;}
    else{
    cout << "polindrom deyil" << endl;}
    return 0;
}