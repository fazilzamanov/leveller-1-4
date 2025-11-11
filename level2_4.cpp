#include <iostream>
using namespace std;
int main() {
    int eded;
    cout << "Bir eded daxil edin: ";
    cin >> eded;
    if (eded % 2 == 0)
        cout << "Eded cutdur."<<endl;
    else
        cout << "Eded tekdir."<<endl;
}