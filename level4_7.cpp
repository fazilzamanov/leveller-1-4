#include<iostream>
#include<cmath>
using namespace std;
int b,s;
int main()
{
cout << "neciye qədər armstronge ədədləri tapmaq istəyirsiz?(aralıq):" << endl;
cin >> b >>s;
for(b;b<=s;b++){
	int y=b,c=0,k=0;
    
    
	while (y>0){
		k++;
		y/=10;}
        
        
	int g=b;
	while (g>0){
		int j =g%10;
		g/=10;
		c+=pow(j,k);} 
        
        
if(c==b){
	cout << b<< endl;}}
    return 0;
}