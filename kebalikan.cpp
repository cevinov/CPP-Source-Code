// Pembalikan string

#include <iostream>
#include <string>

using namespace std;

int main() {
    string kalimat = "Daun pun berguguran";
    string teks;
    string strKarakter = "X";

    for (int j = kalimat.length() - 1; j >= 0; j--) {
        strKarakter[0] = kalimat[j];

        teks = teks + strKarakter;
    }

    cout << "Asal     : " << kalimat << endl;
    cout << "Kebalikan: " << teks << endl;

    return 0;
}
