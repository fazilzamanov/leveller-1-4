#include <iostream>
using namespace std;
bool palindrome(int n) {
    int original = n, ters = 0, qaliq;
    while (n > 0) {
        qaliq = n % 10;
        ters = ters * 10 + qaliq;
        n /= 10;
    }
    return original == ters;
}
int main() {
    cout << "1-den 1000-e qeder palindrome ededler:" << endl;

    for (int i = 1; i <= 1000; i++) {
        if (palindrome(i))
            cout << i << " ";
    }
    cout << endl;
    return 0;
}