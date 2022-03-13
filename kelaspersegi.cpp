// Contoh pembuatan kelas PersegiPanjang

#include <iostream>

using namespace std;

class PersegiPanjang {
    private:
       double lebar, tinggi;
    public:
       PersegiPanjang(double lebar, double tinggi);
       PersegiPanjang(double lebar);
       PersegiPanjang();

       double perolehLuas();
       double perolehKeliling();
};

PersegiPanjang::PersegiPanjang(double lebar,
                               double tinggi) {
    PersegiPanjang::lebar = lebar;
    PersegiPanjang::tinggi = tinggi;
}

PersegiPanjang::PersegiPanjang(double lebar) {
    PersegiPanjang::lebar = lebar;
    PersegiPanjang::tinggi = lebar;
}

PersegiPanjang::PersegiPanjang() {
    PersegiPanjang::lebar = 1;
    PersegiPanjang::tinggi = 1;
}

double PersegiPanjang::perolehLuas() {
    return lebar * tinggi;
}

double PersegiPanjang::perolehKeliling() {
    return 2 * (lebar + tinggi);
}

int main() {
   PersegiPanjang x(10, 20);
   cout << "PersegiPanjang x(10, 20)" << endl;
   cout << "Luas     = " << x.perolehLuas()
        << endl;
   cout << "Keliling = " << x.perolehKeliling()
        << endl;

   PersegiPanjang y(10);
   cout << endl;
   cout << "PersegiPanjang y(10)" << endl;
   cout << "Luas     = " << y.perolehLuas()
        << endl;
   cout << "Keliling = " << y.perolehKeliling()
        << endl;

   PersegiPanjang z;
   cout << endl;
   cout << "PersegiPanjang z" << endl;
   cout << "Luas     = " << z.perolehLuas()
        << endl;
   cout << "Keliling = " << z.perolehKeliling()
        << endl;

   return 0;
}
