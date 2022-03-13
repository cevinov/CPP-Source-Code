// Fungsi untuk menukarkan nilai dua argumen

#include <iostream>

using namespace std;

// Prototipe fungsi
void tukar(int &x, int &y);

int main() {
    int nilaiA = 78;
    int nilaiB = 21;

    cout << "nilaiA = " << nilaiA
         << ", nilaiB = " << nilaiB << endl;

    tukar(nilaiA, nilaiB);
    cout << "nilaiA = " << nilaiA
         << ", nilaiB = " << nilaiB << endl;

    return(0);
}

void tukar(int &x, int &y) {
   int sementara = x;
   x = y;
   y = sementara;
}
