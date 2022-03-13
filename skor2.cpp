// Penentuan skor A, B, C, D, dan E
//    menggunakan if bertingkat

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan skor mata pelajaran" << endl;
    cout << "-----------------------------" << endl;

    float nilai;

    cout << "Nilai (0 s/d 100) = ";
    cin >> nilai;

    // Penentuan skor
    if (nilai <= 0 || nilai > 100)
        cout << "Nilai tidak valid" << endl;
    else
       if (nilai >= 90)
           cout << "Skor A" << endl;
       else
           if (nilai >= 70)
               cout << "Skor B" << endl;
           else
               if (nilai >= 60)
                   cout << "Skor C" << endl;
               else
                   if (nilai >= 50)
                       cout << "Skor D" << endl;
                   else
                       cout << "Skor E" << endl;

     return(0);
}
