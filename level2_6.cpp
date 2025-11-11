#include <iostream>
using namespace std;
int main() {
    int ay;
    cout << "Ay nomresini daxil edin: ";
    cin >>ay;
    if (ay == 12 || ay == 1 || ay == 2)
        cout <<"Qis feslidir"<< endl;
    else if (ay >= 3 && ay <= 5)
        cout <<"Yaz feslidir"<< endl;
    else if (ay >= 6 && ay <= 8)
        cout << "Yay feslidir"<< endl;
    else if (ay >= 9 && ay <= 11)
        cout <<"Payiz feslidir"<< endl;
    else
        cout <<"Bele ay yoxdur"<< endl;
}