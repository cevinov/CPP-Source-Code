// Contoh penggunaan sprintf()

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    cout << "Contoh penggunaan sprintf()" << endl;
    cout << "---------------------------" << endl;

    char hasil[255];
    int bilBulat = 123;
    double bilReal = 123.4567890123;

    sprintf(hasil,
            "bilBulat = %d, bilReal = %Lf",
            bilBulat, bilReal);
    cout << "hasil: " << hasil << endl;

    return 0;
}
