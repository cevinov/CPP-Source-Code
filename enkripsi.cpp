// Fungsi untuk membuat enkripsi teks

#include <iostream>

using namespace std;

// Prototipe fungsi
string enkripsi(string teks);

int main() {
    string str;
    cout << "Masukkan suatu string: ";
    getline(cin, str);

    cout << "Hasil enkripsi:" << endl;
    cout << enkripsi(str) << endl;;

    return(0);
}

string enkripsi(string teks) {
    string hasil = teks;
    for (int j = 0; j < teks.length(); j++) {
        char karakter = teks[j];

        if (isupper(karakter)) {
            if (karakter == 'Y')
                karakter = 'A';
            else if (karakter == 'Z')
                karakter = 'B';
            else
                karakter = karakter + 2;
        }
        else if (islower(karakter)) {
            if (karakter == 'a')
                karakter = 'z';
            else
                karakter = karakter - 1;
        }
        else if (isdigit(karakter)) {
            karakter = '0' + ('9' - karakter);
        }

        // Simpan di hasil
        hasil[j] = karakter;
    }

    return hasil;
}
