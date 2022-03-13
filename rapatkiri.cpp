#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string namaBarang = "Buku Tulis AAA 30lbr";
    int harga = 21750;

    cout << "| " << namaBarang << " | "
         << harga << " |" << endl;

    cout << "| " << setw(30) << namaBarang << " | "
         << setw(10) << harga << " |" << endl;

    cout << "| " << setiosflags(ios::left)
         << setw(30) << namaBarang
         << resetiosflags(ios::left)
         << " | "
         << setw(10) << harga << " |" << endl;

    return(0);
}
