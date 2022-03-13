// Contoh struktur data tumpukan

#include <iostream>

using namespace std;

class SimpulTumpukan {
    public:
        char data;
        SimpulTumpukan* berikut;

    // Konstruktor
    SimpulTumpukan(char data);
};

class Tumpukan {
    private:
        SimpulTumpukan* puncak;
    public:
        Tumpukan();
        ~Tumpukan();
        void tumpuk(char data);
        bool kosong();
        char ambil();
};

// ----------------------------------------
// Konstruktor
// ----------------------------------------
SimpulTumpukan::SimpulTumpukan(char data) {
    SimpulTumpukan::data = data;
    SimpulTumpukan::berikut = NULL;
}

Tumpukan::Tumpukan() {
    Tumpukan::puncak = NULL;
}

// ----------------------------------------
// Destruktor
// ----------------------------------------
Tumpukan::~Tumpukan()
{
    // Hapus semua simpul
    SimpulTumpukan* ptr;
    while (puncak != NULL) {
        ptr = puncak;
        puncak = puncak->berikut;
        delete ptr; // Hapus simpul
    }
}

// ----------------------------------------
// tumpuk()
//
// Untuk memasukkan data ke Tumpukan
// ----------------------------------------
void Tumpukan::tumpuk(char data) {
    SimpulTumpukan* ptrBaru;

    ptrBaru = new SimpulTumpukan(data);
    ptrBaru->berikut = puncak;
    puncak = ptrBaru;
}

// ----------------------------------------
// kosong()
//
// Memberikan nilai balik true
//     jika tumpukan kosong
// ----------------------------------------
bool Tumpukan::kosong() {
    return puncak == NULL;
}

// ----------------------------------------
// ambil()
//
// Menghapus simpul dan memberikan
//     nilai balik berupa data yang dihapus
// ----------------------------------------

char Tumpukan::ambil() {
    if (kosong()) {
        cout << "Tumpukan kosong." << endl;

        return 0;   // Karakter NULL
                    // berarti tumpukan kosong
    }

    SimpulTumpukan* ptr;
    char data;

    ptr = puncak;
    data = puncak->data;
    puncak = puncak->berikut;
    delete ptr;

    return data;
}

int main() {
    Tumpukan tumpukan;

    tumpukan.tumpuk('A');
    tumpukan.tumpuk('B');
    tumpukan.tumpuk('C');
    tumpukan.tumpuk('D');

    // Ambil isi tumpukan
    cout << "Isi tumpukan dari paling atas "
         << "hingga paling bawah:"
         << endl;

    char karakter;
    while (!tumpukan.kosong()) {
        karakter = tumpukan.ambil();
        cout << karakter << endl;
    }

    return 0;
}
