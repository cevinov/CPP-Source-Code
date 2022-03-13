// Tabel Perkalian

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int n;

    cout << "Tabel perkalian" << endl;
    cout << "---------------" << endl;

    cout << "n = ";
    cin >> n;

    cout << setw(4) << " ";
    for (int kolom = 1; kolom <= n; kolom++)
        cout << setw(3) << kolom << " ";

    cout << endl;

    for (int baris = 1; baris <= n; baris++) {
        cout << setw(3) << baris << " ";

        for (int kolom = 1; kolom < baris; kolom++)
            cout << setw(4) << " ";

        for (int kolom = baris; kolom <= n; kolom++)
            cout << setw(3) << baris * kolom << " ";

        cout << endl;
    }

    return(0);
}
