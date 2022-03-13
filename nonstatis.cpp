// Contoh kalau variabel statis tidak digunakan

#include <iostream>

using namespace std;

void tes() {
    int pencacah = 0;

    pencacah++;
    cout << "pencacah = " << pencacah << endl;
}

int main() {
    tes();
    tes();
    tes();

    return 0;
}

