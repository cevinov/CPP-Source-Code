// Contoh fungsi dengan dua parameter dan
//     tanpa nilai balik

#include <iostream>
#include <string>

using namespace std;

// ---------------------------------------
// String pemisah ditampilkan n kali
//    dalam satu baris
// ---------------------------------------

void pemisahBaris(string pemisah, int n) {

    for (int j = 0; j < n; j++)
        cout << pemisah;

    cout << endl; // Pindah baris
}

int main() {
    pemisahBaris("*-", 4);

    cout << "Ayam" << endl << "Itik" << endl
         << "Kambing" << endl;

    pemisahBaris("-", 15);

    cout << "Televisi" << endl << "Radio" << endl
         << "Kipas Angin" << endl;

    pemisahBaris("*====", 3);

    return 0;
}
