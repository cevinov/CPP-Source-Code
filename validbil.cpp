// Validasi bilangan  bulat

#include <iostream>

using namespace std;

int main() {
    cout << "Validasi pemasukan data" << endl;
    cout << "-----------------------" << endl;

    int bilangan;
    int valid = false;

    do {
        cout << "Bilangan bulat = ";
        cin >> bilangan;

        if (cin)
            valid = true;
        else
            cout << "Data tidak valid." << endl;

        // Hapus data dalam penyangga cin
        cin.clear();
        cin.ignore(INT_MAX, '\n');
    } while (valid == false);

    cout << "Trims. Anda telah memasukkan "
         << bilangan << "." << endl;

    return(0);
}
