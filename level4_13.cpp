#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Nece eded daxil edilecek? ";
    cin >> N;
    double eded;
    double cemcut = 0, cemtek = 0;
    for (int i = 0; i < N; i++) {
        cout << i << ". indeksdeki ededi daxil et: ";
        cin >> eded;

        if (i % 2 == 0)
            cemcut += eded; 
        else
            cemtek += eded; 
    }

    cout << "Cut indekslerdeki ededlerin cemi: " << cemcut << endl;
    cout << "Tek indekslerdeki ededlerin cemi: " << cemtek << endl;

    return 0;
}