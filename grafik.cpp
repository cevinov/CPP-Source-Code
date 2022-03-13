// Pembuatan grafik

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int JUM_DATA = 10;
    int data[] = {
        27, 30, 5, 15, 18, 33, 40, 8, 20, 25
    };

    for (int indeks = 0; indeks < JUM_DATA; indeks++) {
        cout << setw(4) << data[indeks] << ": ";
        for (int j = 0; j < data[indeks]; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
