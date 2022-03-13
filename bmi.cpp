// Perhitungan BMI

#include <iostream>

using namespace std;

int main() {
    cout << "Body Mass Index" << endl;
    cout << "---------------" << endl;

    float berat, tinggi;

    cout << "Berat (kg) = ";
    cin >> berat;

    cout << "Tinggi (m) = ";
    cin >> tinggi;

    // Hitung BMI
    float bmi = berat / (tinggi * tinggi);

    // Tampilkan hasilnya
    cout << "BMI : " << bmi << endl;

    if (bmi < 18.5)
        cout << "Kategori: kurus" << endl;
    else
        if (bmi < 25)
            cout << "Kategori: normal" << endl;
        else
            if (bmi < 30)
                cout << "Kategori: kelebihan berat" << endl;
            else
                cout << "Kategori: kegemukan" << endl;

    return(0);
}
