// Penentuan nama hari

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
    if (kodeHari == 0)
        cout << "Minggu" << endl;
    else
        if (kodeHari == 1)
            cout << "Senin" << endl;
        else
            if (kodeHari == 2)
                cout << "Selasa" << endl;
            else
                if (kodeHari == 3)
                    cout << "Rabu" << endl;
                else
                    if (kodeHari == 4)
                        cout << "Kamis" << endl;
                    else
                        if (kodeHari == 5)
                            cout << "Jumat" << endl;
                        else
                            if (kodeHari == 6)
                                cout << "Sabtu" << endl;
                            else
                                cout << "Kode salah" << endl;

     return(0);
}
