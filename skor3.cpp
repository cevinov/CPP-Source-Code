// Penentuan skor A, B, C, D, dan E
//    menggunakan switch

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan skor matapelajaran" << endl;
    cout << "----------------------------" << endl;

    float nilai;

    cout << "Nilai (0 s/d 100) = ";
    cin >> nilai;

    int bilangan = nilai / 10;

    // Penentuan skor
    if (nilai <= 0 || nilai > 100)
        cout << "Nilai tidak valid" << endl;
    else
       switch (bilangan) {
           case 10:
           case 9:
               cout << "Skor A" << endl;
               break;
           case 8:
           case 7:
               cout << "Skor B" << endl;
               break;
           case 6:
               cout << "Skor C" << endl;
               break;
           case 5:
               cout << "Skor D" << endl;
               break;
           default:
               cout << "Skor E" << endl;
    }

    return(0);
}
