// Penentuan skor A, B, C, D, dan E

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan skor mata pelajaran" << endl;
    cout << "-----------------------------" << endl;

    float nilai;

    cout << "Nilai (0 s/d 100) = ";
    cin >> nilai;

    // Penentuan skor
    if (nilai >= 90)
        cout << "Skor A" << endl;

    if (nilai >= 70 && nilai < 90)
        cout << "Skor B" << endl;

    if (nilai >= 60 && nilai < 70)
        cout << "Skor C" << endl;

    if (nilai >= 50 && nilai < 60)
        cout << "Skor D" << endl;

    if (nilai < 50)
        cout << "Skor E" << endl;

     return(0);
}
