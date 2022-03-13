// Contoh objek sebagai parameter fungsi

#include <iostream>
#include <string>

using namespace std;

class Hewan {
    private:
         string nama;
    public:
        Hewan(string nama);
        void info();
};

Hewan::Hewan(string nama) {
    Hewan::nama = nama;
}

void Hewan::info() {
    cout << "Nama: " << nama << endl;
}

// Parameter pemanggilan dengan nilai
void fungsiA(Hewan hewan) {
    hewan.info();
}

// Parameter pemanggilan dengan referensi
void fungsiB(Hewan &hewan) {
    hewan.info();
}

// Parameter pemanggilan dengan pointer
void fungsiC(Hewan *hewan) {
    hewan->info();
}

int main() {
    Hewan pet("Kelinci");

    fungsiA(pet);  // dengan nilai
    fungsiB(pet);  // dengan referensi
    fungsiC(&pet);  // dengan pointer

    return 0;
}
