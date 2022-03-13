// Penentuan huruf atau bukan

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char kar;

    cout << "Penentuan sebagai huruf atau bukan"
         << endl;
    cout << "Karakter = ";
    kar = cin.get();

    bool huruf = ((kar >= 'A' && kar <= 'A') ||
                  (kar >= 'a' && kar <= 'z'));
    string keterangan =  huruf ? "huruf": "bukan huruf";
    cout << kar << " adalah "
         << keterangan << endl;

    return(0);
}
