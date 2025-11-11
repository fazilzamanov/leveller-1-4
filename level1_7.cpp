#include <iostream>
using namespace std;
int a,b,c;
int main(){
    cout<<"ilk ededi daxil edin:"<<endl;
    cin>>a;
    cout<<"ikinci ededi daxil edin:"<<endl;
    cin>>b;
    cout<<"swapdan once:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    c=a;
    a=b;
    b=c;
    cout<<"swapdan sonra:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}