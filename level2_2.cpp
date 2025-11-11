#include <iostream>
using namespace std;
int main() {
    double eded;
    cout << "Bir eded daxil edin: ";
    cin >> eded;
    if (eded > 0)
        cout << "Eded musbetdir."<< endl;
    else if (eded < 0)
        cout << "Eded menfidir."<< endl;
    else
        cout << "Eded sifirdir."<< endl;
}