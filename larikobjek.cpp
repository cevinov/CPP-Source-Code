// Contoh larik objek

#include <iostream>
#include <string>

using namespace std;

class Hewan {
    private:
         string nama;
    public:
        Hewan(string nama = "<Belum diberi nama>");
        void aturNama(string nama);
        void info();
};

Hewan::Hewan(string nama) {
    Hewan::nama = nama;
}

void Hewan::aturNama(string nama) {
    Hewan::nama = nama;
}

void Hewan::info() {
    cout << "Nama: " << nama << endl;
}

int main() {
    Hewan daftarHewan[5];

    // Tampilkan isi larik
    for (int j = 0; j < 5; j++)
        daftarHewan[j].info();

    // Pemberian nilai ke objek
    daftarHewan[0].aturNama("Kelinci");
    daftarHewan[1].aturNama("Kucing");
    daftarHewan[2].aturNama("Kuda");
    daftarHewan[3].aturNama("Kijang");
    daftarHewan[4].aturNama("Kalkun");

    // Tampilkan isi larik
    cout << "=================" << endl;
    for (int j = 0; j < 5; j++)
        daftarHewan[j].info();


    return 0;
}
