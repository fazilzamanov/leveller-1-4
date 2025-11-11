#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Ededi daxil edin: ";
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    cout << "1-den " << n << " -e qeder ededlerin cemi: " << s << endl;
    return 0;
}