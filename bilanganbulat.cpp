// Contoh pembuatan kelas BilanganBulat

#include <iostream>

using namespace std;

class BilanganBulat {
    private:
       int bilangan;
    public:
       BilanganBulat(int bilangan);
       bool ganjil();
       bool lebihBesarDaripada(int bilangan);
       bool lebihKecilDaripada(int bilangan);
       bool samaDengan(int bilangan);
};

BilanganBulat::BilanganBulat(int bilangan) {
    BilanganBulat::bilangan = bilangan;
}

bool BilanganBulat::ganjil() {
    return bilangan % 2 == 1;
}

bool BilanganBulat::lebihBesarDaripada(int bilangan) {
    return BilanganBulat::bilangan > bilangan;
}

bool BilanganBulat::lebihKecilDaripada(int bilangan) {
    return BilanganBulat::bilangan < bilangan;
}

bool BilanganBulat::samaDengan(int bilangan) {
    return BilanganBulat::bilangan == bilangan;
}

int main() {
   BilanganBulat BilanganBulat(2);
   cout << BilanganBulat.ganjil() << endl;
   cout << BilanganBulat.lebihBesarDaripada(3) << endl;
   cout << BilanganBulat.lebihKecilDaripada(3) << endl;
   cout << BilanganBulat.samaDengan(3) << endl;

   return 0;
}
