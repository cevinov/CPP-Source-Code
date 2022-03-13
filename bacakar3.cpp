#include <iostream>

using namespace std;

int main() {
    char karA, karB;

    cout << "Masukkan satu karakter: ";
    karA = cin.get();
    cout << "Karakter -> " << karA << endl;

    cout << "Masukkan satu karakter lagi: ";
    cin.ignore();
    karB = cin.get();
    cout << "Karakter -> " << karB << endl;

    return(0);
}
