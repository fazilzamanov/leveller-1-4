#include <iostream>
using namespace std;
int main() {
    int il;
    cout << "Ili daxil et: ";
    cin >> il;
    if ((il % 4 == 0 && il % 100 != 0) || (il % 400 == 0))
        cout << il << "il artiq ildir." << endl;
    else
        cout << il << "il artiq il deyil." << endl;
}