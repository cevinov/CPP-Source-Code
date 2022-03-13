// Penggunaan sentinel untuk
//    mengakhiri pemasukan data

#include <iostream>

using namespace std;

int main() {
    int cacah;
    float total, data;

    cacah = 0;
    total = 0;

    cout << "Masukkan data. (-1 = selesai): ";
    cin >> data;

    while (data != -1) {
        cacah++;       // Naikkan sebesar 1
        total += data; // Tambahkan data ke total

        cout << "Masukkan data. (-1 = selesai): ";
        cin >> data;
    }

    // Hitung rata-rata
    float rerata = total / cacah;

    cout << "Rata-rata = " << rerata << endl;

    return 0;
}
