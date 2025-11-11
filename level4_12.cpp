#include <iostream>
using namespace std;
int main() {
    int eded, s = 0;
    cout << "Bir eded daxil et: ";
    cin >> eded;
    for (int i = 1; i <= eded / 2; i++){
        if (eded % i == 0)
            s += i;
    }
    if (s == eded)
        cout << eded << " mukemmel ededdir." << endl;
    else
        cout << eded << " mukemmel eded deyil." << endl;
    return 0;
}