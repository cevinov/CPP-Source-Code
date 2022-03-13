// Contoh penggunaan typedef

#include <iostream>

using namespace std;

int main() {
    typedef unsigned short int word;
    word bilangan;

    bilangan = 45000;
    cout << "bilangan = " << bilangan << endl;

    return 0;
}
