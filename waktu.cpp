#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int jam = 8;
    int menit = 9;
    int detik = 2;

    cout << jam << ":"
         << menit << ":"
         << detik << endl;

    cout << setfill('0');
    cout << setw(2) << jam << ":"
         << setw(2) << menit << ":"
         << setw(2) << detik << endl;

    cout << setfill(' ');
    cout << setw(2) << jam << ":"
         << setw(2) << menit << ":"
         << setw(2) << detik << endl;

    return(0);
}
