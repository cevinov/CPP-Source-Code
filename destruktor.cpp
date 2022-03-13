// Contoh destruktor

#include <iostream>
#include <string>

using namespace std;

// Pembuatan kelas dengan destruktor
class Dinosaurus {
    private:
        string jenis;
    public:
        // Konstruktor
        Dinosaurus(string jenis) {
            Dinosaurus::jenis = jenis;

            cout << jenis << " tercipta"
                 << endl;
        }

        // Destruktor
        ~Dinosaurus() {
             cout << jenis << " punah"
                  << endl;
        }
};

// Prototipe fungsi
void masaPurba();

int main() {
    cout << "Fungsi main() dijalankan..."
         << endl;

    // Pembuatan objek di main()
    Dinosaurus tirano("Tiranosaurus");

    // Panggil fungsi
    cout << endl;
    masaPurba();
    cout << endl;

    cout << "Fungsi main() mau berakhir..."
         << endl;

    return 0;
}

void masaPurba() {
    cout << "Fungsi masaPurba() dipanggil..."
         << endl;

    // Pembuatan objek di masaPurba()
    Dinosaurus spino("Spinosaurus");

    cout << "Fungsi masaPurba() mau berakhir..."
         << endl;
}
