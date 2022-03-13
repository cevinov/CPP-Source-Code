// Penentuan tahun kabisat

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan tahun kabisat" << endl;
    cout << "-----------------------" << endl;

    unsigned int tahun;

    cout << "Tahun = ";
    cin >> tahun;

    if (tahun % 4 == 0)
        if (tahun % 100 == 0 && tahun % 400 != 0)
            cout << "Bukan tahun kabisat" << endl;
        else
            cout << "Tahun kabisat" << endl;
    else
        cout << "Bukan tahun kabisat" << endl;

    return(0);
}
