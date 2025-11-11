#include<iostream>
using namespace std;
#include<cmath>

int main()
{
int a,b;
char x;
    cout << "birinci ədədi daxil edin:" << endl;
    cin >> a;
    cout << "hansı əməliyyat olacaq ?(*,/,+,-)" << endl;
    cin >> x;
    cout << "ikinci ədədi daxil edin:" << endl;
    cin >> b;
    cout  << endl;
    switch(x){
    case '*' :
    cout << a*b << endl;
    break; 
    case '/':
    cout << a/b << endl; break;
    case '+':
    cout << a+b << endl; break;
    case '-':
    cout << a-b << endl  ; break;}
    return 0;
}