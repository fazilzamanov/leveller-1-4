#include <iostream>
using namespace std;
int main() {
    double eded, enBoyuk;
    bool ilkEded = true;
    cout << "Ededleri daxil edin" << endl;
    while (true) {
        cin >> eded;
        if (eded == 0)
            break;
        if (ilkEded) {
            enBoyuk = eded;
            ilkEded = false;
        } else if (eded > enBoyuk) {
            enBoyuk = eded;
        }
    }
    if (ilkEded)
        cout << "Heç bir eded daxil edilmedi." << endl;
    else
        cout << "En boyuk eded: " << enBoyuk << endl;
    return 0;
}