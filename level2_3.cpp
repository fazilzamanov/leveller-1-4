#include <iostream>
using namespace std;
int main() {
    double a,b,c;
    cout << "Uc eded daxil edin: ";
    cin >>a>>b>>c;
    if (a >= b && a >= c)
        cout << "En boyuk eded:"<<a<<endl;
    else if (b >= a && b >= c)
        cout << "En boyuk eded:"<<b<<endl;
    else
        cout << "En boyuk eded:"<<c<<endl;
}