// Larik dinamis berdimensi dua

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string (*ptr2Dim)[3] = new string[5][3];

    // Penugasan data ke larik dinamis
    ptr2Dim[0][0] = "Austria";
    ptr2Dim[0][1] = "Wina";
    ptr2Dim[0][2] = "Eropa";

    ptr2Dim[1][0] = "Mesir";
    ptr2Dim[1][1] = "Kairo";
    ptr2Dim[1][2] = "Afrika";

    ptr2Dim[2][0] = "Kanada";
    ptr2Dim[2][1] = "Ottawa";
    ptr2Dim[2][2] = "Amerika";

    ptr2Dim[3][0] = "Selandia Baru";
    ptr2Dim[3][1] = "Wellington";
    ptr2Dim[3][2] = "Australia";

    ptr2Dim[4][0] = "Jepang";
    ptr2Dim[4][1] = "Tokyo";
    ptr2Dim[4][2] = "Asia";

    // Tampilkan isi variabel dinamis
    cout << setiosflags(ios::left);

    cout << setw(20);
    cout << "Negara";

    cout << setw(15);
    cout << "Ibukota";

    cout << setw(10);
    cout << "Benua" << endl;

    for (int j = 0; j < 45; j++)
        cout << "=";

    cout << endl;

    for (int brs = 0; brs < 5; brs++) {
        cout << setw(20);
        cout << ptr2Dim[brs][0];

        cout << setw(15);
        cout << ptr2Dim[brs][1];

        cout << setw(10);
        cout << ptr2Dim[brs][2] << endl;
    }

    cout << resetiosflags(ios::left);

    // Variabel dinamis perlu dihapus
    //     sebelum program berakhir
    delete [] ptr2Dim;

    return 0;
}

