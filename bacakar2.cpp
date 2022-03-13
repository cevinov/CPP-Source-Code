#include <iostream>

using namespace std;

int main() {
    char karA, karB;

    cout << "Masukkan satu karakter: ";
    cin >> karA;
    cout << "Karakter -> " << karA << endl;

    cout << "Masukkan satu karakter lagi: ";
    cin.ignore();
    cin >> karB;
    cout << "Karakter -> " << karB << endl;

    return(0);
}
