// Fungsi untuk dengan nilai bawaan

#include <iostream>

using namespace std;

// Prototipe fungsi
void tampilDenganSpasi(string teks,
                       bool spasi = true);
int main() {
    string str = "Fusion";
    tampilDenganSpasi(str);
    tampilDenganSpasi(str, false);

    return(0);
}

void tampilDenganSpasi(string teks,
                       bool spasi) {
   char pemisah = ' ';
   if (!spasi)
       pemisah = '-';

   for (int j = 0; j < teks.length() - 1; j++)
      cout << teks[j] << pemisah;

   cout << teks[teks.length() - 1] << endl;
}

