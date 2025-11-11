#include<iostream>
using namespace std;

int main()
{
int a,i=2,s=0;
    cout << "eded daxil edin" << endl;
    cin >> a;
    for(i;i<(a/2);i++){
    if(a%i==0){
    s++;}
    }
    if(s==0) {
    cout << "sadedir"<< endl;}
    else 
    cout << "sade deyil" << endl;
    return 0;
}