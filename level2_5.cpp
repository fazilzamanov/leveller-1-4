#include <iostream>
using namespace std;
int main() {
    int bal;
    cout << "Imtahan balini daxil edin:";
    cin >> bal;
    if (bal >= 0 && bal <= 50)
        cout << "Qiymet: F" << endl;
    else if (bal <= 60)
        cout << "Qiymet: E" << endl;
    else if (bal <= 70)
        cout << "Qiymet: D" << endl;
    else if (bal <= 80)
        cout << "Qiymet: C" << endl;
    else if (bal <= 90)
        cout << "Qiymet: B" << endl;
    else if (bal <= 100)
        cout << "Qiymet: A" << endl;
    else
        cout << "Bal sehvdir"<< endl;
}