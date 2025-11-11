#include<iostream>
#include<cmath>
using namespace std;
int I=100,n=1000;
int main()
{
while(I<n){ 
I++;
    int a = I;
    int k=0;
    while(a>0){
   	 k+=a%10;
  	 a/=10;}
    if(k==10){
		cout <<I << endl;}
        
}


    return 0;
}