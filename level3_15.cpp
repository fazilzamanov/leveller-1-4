#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Nece eded daxil edilecek? ";
    cin >> N;
    double s = 0, eded;
    for (int i = 1; i <= N; i++) {
        cin >> eded;
        s += eded;
    }
    cout << "Cemi: " << s << endl;
    return 0;
}