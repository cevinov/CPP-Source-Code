// Konversi dari string ke bilangan

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    cout << "Konversi string ke bilangan" << endl;
    cout << "---------------------------" << endl;

    string teks;
    int bilInt;

    cout << "Masukkan string yang berisi bilangan: ";
    getline(cin, teks);

    istringstream iss(teks);

    // Konversi ke tipe int
    iss >> bilInt;
    if (!iss.good())
       cout << teks << " tidak mengandung bilangan bulat"
            << endl;
    else
       cout << "Isi bilInt: " << bilInt << endl;

    return 0;
}
