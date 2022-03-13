// Tabel Perkalian

#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Penentuan bilangan prima" << endl;
    cout << "------------------------" << endl;

    cout << "bilangan = ";
    cin >> n;

    bool prima = true;
    for (int bil = 2; bil <= n / 2; bil++) {
        if (n % bil == 0) {
            prima = false;
            break;
        }
    }

    if (prima)
        cout << n << " adalah bilangan prima"
             << endl;
    else
        cout << n << " bukan bilangan prima"
             << endl;

    return(0);
}
