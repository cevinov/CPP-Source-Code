// Contoh pembuatan kelas
//     untuk bilangan kompleks

#include <iostream>

using namespace std;

class BilanganKompleks {
    private:
        double real;
        double imaj;
    public:
        BilanganKompleks(double x, double y) {
            real = x;
            imaj = y;
        }

        double perolehReal() {
            return real;
        }

        double perolehImajiner() {
            return imaj;
        }

        BilanganKompleks penjumlahan(BilanganKompleks x) {
            BilanganKompleks perantara(0, 0);

            perantara.real = real + x.perolehReal();
            perantara.imaj = imaj + x.perolehImajiner();

            return perantara;
        }

        BilanganKompleks pengurangan(BilanganKompleks x) {
            BilanganKompleks perantara(0, 0);

            perantara.real = real - x.perolehReal();
            perantara.imaj = imaj - x.perolehImajiner();

            return perantara;
        }
};

int main() {
    BilanganKompleks bkX(2, 1);
    BilanganKompleks bkY(3, -2);

    BilanganKompleks hasil = bkX.penjumlahan(bkY);
    cout << "PENJUMLAHAN" << endl;
    cout << "Bagian real    : "
         << hasil.perolehReal() << endl;
    cout << "Bagian imajiner: "
         << hasil.perolehImajiner() << endl;

    hasil = bkX.pengurangan(bkY);
    cout << endl;
    cout << "PENGURANGAN" << endl;
    cout << "Bagian real    : "
         << hasil.perolehReal() << endl;
    cout << "Bagian imajiner: "
         << hasil.perolehImajiner() << endl;

    return 0;
}
