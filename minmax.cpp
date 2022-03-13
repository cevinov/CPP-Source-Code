// Cara memperoleh bilangan terkecil dan terbesar
//     dari sejumlah bilangan

#include <iostream>

using namespace std;

int main() {
    int bilangan;

    cout << "Bilangan terkecil dan terbesar"
         << endl;
    cout << "=============================="
         << endl;

    cout << "Bilangan (0 untuk mengakhiri) = ";
    cin >> bilangan;

    int terkecil, terbesar;

    bool pertama = true;
	while (bilangan != 0) {
        if (pertama) {
            pertama = false;
            terkecil = bilangan;
            terbesar = bilangan;
        }
        else {
            if (terkecil > bilangan)
                terkecil = bilangan;

            if (terbesar < bilangan)
                terbesar = bilangan;
        }

        cout << "Bilangan = ";
        cin >> bilangan;
	}

	if (pertama)
        cout << "Data tidak ada" << endl;
    else {
	    cout << endl;
	    cout << "Terkecil = " << terkecil << endl;
	    cout << "Terbesar = " << terbesar << endl;
    }

    return(0);
}
