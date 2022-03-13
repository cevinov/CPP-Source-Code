// Konversi dari string ke bilangan

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    cout << "Konversi string ke bilangan" << endl;
    cout << "---------------------------" << endl;

    float bilReal;

    cout << "Masukkan bilangan real: ";
    cin >> bilReal;

    ostringstream oss(ostringstream::ate);

    // Isikan string
    oss.str("Hasil konversi -> ");

    // Konversi bilReal ke string
    oss << bilReal;
    cout << oss.str() << endl;

    return 0;
}
