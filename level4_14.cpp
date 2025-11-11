#include <iostream>
using namespace std;
int main() {
    int eded, original, ters = 0, qaliq;
    cout << "Bir eded daxil et: ";
    cin >> eded;
    original = eded;
    while (eded != 0) {
        qaliq = eded % 10;        
        ters = ters * 10 + qaliq;  
        eded /= 10;               
    }
    cout << "Ededin tersi: " << ters << endl;
    if (original == ters)
        cout << "Eded tersi ile beraberdir" << endl;
    else
        cout << "Eded tersi ile ferqlidir." << endl;
    return 0;
}