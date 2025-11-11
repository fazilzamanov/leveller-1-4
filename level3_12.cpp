#include <iostream>
using namespace std;

int main() {
    int eded;
    cout << "Bir eded daxil edin: ";
    cin >> eded;
    cout << eded << " ededinin bolenleri: ";
    for (int i = 1; i <= eded; i++) {
        if (eded % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}