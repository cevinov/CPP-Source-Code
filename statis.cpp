// Contoh variabel statis

#include <iostream>

using namespace std;

void tes() {
    static int pencacah = 0;

    pencacah++;
    cout << "pencacah = " << pencacah << endl;
}

int main() {
    tes();
    tes();
    tes();

    return 0;
}

