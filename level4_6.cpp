#include<iostream>
#include<cmath>
using namespace std;
int I=1,n,m=0,x=0,s=0,a;
double o;
int main()
{
cout << "eded sayini daxil edin:" << endl;
cin >> n;
while (I<=n){
cin>> a;
if(I==1){
m=a;}
else if(m>a){
m=a;}
if(x<a){
x=a;}
I++;
s+=a;
    }
cout << "min:"<<m<<" max:"<<x<<" ortalama:"<<(double) s/I<< endl;
    return 0;
}