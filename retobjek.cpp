// Contoh objek sebagai nilai balik

#include <iostream>
#include <string>

using namespace std;

class Hewan {
    private:
         string nama;
    public:
        Hewan(string nama = "<Belum diberi nama>");
        void info();
};

Hewan::Hewan(string nama) {
    Hewan::nama = nama;
}

void Hewan::info() {
    cout << "Nama: " << nama << endl;
}

// Fungsi dengan nilai balik berupa objek
Hewan buatObjekHewan(string nama) {
   Hewan hewan(nama);
   return hewan;
}
int main() {
    Hewan pet("Kelinci");
    pet.info();

    pet = buatObjekHewan("Kucing");
    pet.info();

    return 0;
}
