#include <iostream>
using namespace std;
int main() {
    int eded;
    cout << "Bir eded daxil eedin: ";
    cin >> eded;
    if (eded == 0) {
        cout << "Binary formasi: 0" << endl;
    }
    string binary = "";
    int n = eded;
    while (n > 0) {
        binary = char((n % 2) + '0') + binary; 
        n /= 2; 
    }
    cout << "Binary formasi: " << binary << endl;
    return 0;
}