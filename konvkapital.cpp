// Contoh konversi string dari huruf kapital
//     ke huruf kecil dan sebaiknya

#include <iostream>
#include <string>


using namespace std;

int main() {
    cout << "Konversi huruf dalam string" << endl;
    cout << "---------------------------" << endl;

    string teks = "Tes..tes 123. MUDAH ya?";

    cout << "Keadaan awal teks   : " << teks << endl;

    // Konversi huruf kecil ke kapital
    for (int j = 0; j < teks.length(); j++)
        if (islower(teks[j]))
            teks[j] = toupper(teks[j]);

    cout << "Konversi huruf besar: " << teks << endl;

    // Konversi huruf kapital ke kecil
    for (int j = 0; j < teks.length(); j++)
        if (isupper(teks[j]))
            teks[j] = tolower(teks[j]);

    cout << "Konversi huruf besar: " << teks << endl;

    return 0;
}
