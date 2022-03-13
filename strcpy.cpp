// Penyalinan string dengan strcpy()

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    cout << "Penyalinan string" << endl;
    cout << "-----------------" << endl;

    char negara[15];

    strcpy(negara, "Austria");
    cout << "Isi negara: " << negara << endl;

    strcpy(negara, "Indonesia");
    cout << "Isi negara: " << negara << endl;

    return 0;
}
