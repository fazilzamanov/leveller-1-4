#include <iostream>
using namespace std;
int main() {
    int saniye;
    cout << "Saniyeni daxil edin: ";
    cin >> saniye;
    int deqiqe = saniye / 60;
    int saat = deqiqe / 60;
    cout << "Deyiqe:"<< deqiqe << endl;
    cout << "Saat:"<< saat << endl;
}