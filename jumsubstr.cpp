// Perhitungan jumlah substring ra

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Perhitungan jumlah subtring 'ra'"
         << endl;
    cout << "--------------------------------"
         << endl;

    string teks;
    int jum = 0;

    cout << "Masukkan string dengan sejumlah 'ra': ";
    getline(cin, teks);

    // Proses pencarian dan perhitungan 'ra'
    int pos = 0;
    do {
       int nilaiBalik = teks.find("ra", pos);
       if (nilaiBalik == -1)
           break;

       jum++;
       pos = nilaiBalik + 2;
    } while (pos <= teks.length() - 2);

    cout << "Jumlah substring 'ra' = "
         << jum << endl;

    return 0;
}
