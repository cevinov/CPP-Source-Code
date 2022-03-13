// Penentuan nama hari
//    menggunakan switch

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan nama hari" << endl;
    cout << " 0 = Minggu       1 = Senin" << endl;
    cout << " 2 = Selasa       3 = Rabu" << endl;
    cout << " 4 = Kamis        5 = Jumat" << endl;
    cout << " 6 = Sabtu" << endl;

    cout << "---------------------------" << endl;

    int kodeHari;

    cout << "Kode hari = ";
    cin >> kodeHari;

    // Penentuan nama hari
    switch (kodeHari) {
        case 0:
            cout << "Minggu" << endl;
            break;
        case 1:
            cout << "Senin" << endl;
            break;
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        case 6:
            cout << "Sabtu" << endl;
            break;
        default:
            cout << "Kode salah" << endl;
    }

    return(0);
}
