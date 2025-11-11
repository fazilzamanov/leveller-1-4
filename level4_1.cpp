#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Bir eded daxil et: ";
    cin >> n;
    int s = 0;
    for (int i = 2; i <= n; i += 2) { 
        s += i * i; 
    }
    cout << "cemi: " << s << endl;
    return 0;
}