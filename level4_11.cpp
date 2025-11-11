#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 1, c;
    cout << "1000den kicik fibonacci ededleri:" << endl;
    cout << a << " " << b << " ";
    while (true) {
        c = a + b;
        if (c >= 1000)
            break;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}