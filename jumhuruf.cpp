// Contoh fungsi yang memberikan nilai balik
//     berupa jumlah huruf pada string
//     argumennya

#include <iostream>
#include <string>

using namespace std;

int perolehJumlahHuruf(string st) {
    int jumlahHuruf = 0;

    for (int j = 0; j < st.length(); j++)
       if (isalpha(st[j]))
           jumlahHuruf++;

    return jumlahHuruf;
}

int main() {
    cout << "Jumlah huruf = "
         << perolehJumlahHuruf("Tes..tes 123!")
         << endl;

    return 0;
}
