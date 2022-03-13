// Contoh pembuatan variabel dinamis
//     bertipe double

#include <iostream>

using namespace std;

int main() {
    double *ptrData;
    ptrData = new double;

    // Pemberian nilai ke variabel dinamis
    *ptrData = 45.678;

    // Tampilkan isi variabel dinamis
    cout << "Isi variabel dinamis = "
         << *ptrData << endl;

    // Variabel dinamis perlu dihapus
    //     sebelum program berakhir
    delete ptrData;

    return 0;
}

