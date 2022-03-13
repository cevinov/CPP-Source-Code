// Contoh penentuan segitiga siku-siku atau bukan

#include <iostream>

using namespace std;

int main() {
    double a, b, c;

    cout << "Masukkan tiga nilai sisi segitiga: ";
    cin >> a >> b >> c;

    bool segitigaSikuSiku = false;
    double toleransi = 0.00001;

    double jumlahKuadrat = a * a + b * b;
    double cKuadrat = c * c;
    if (jumlahKuadrat >= cKuadrat - toleransi &&
        jumlahKuadrat <= cKuadrat + toleransi)
        segitigaSikuSiku = true;
    else
    {
        jumlahKuadrat = a * a + c * c;
        double bKuadrat = b * b;
        if (jumlahKuadrat >= bKuadrat - toleransi &&
            jumlahKuadrat <= bKuadrat + toleransi)
            segitigaSikuSiku = true;
        else
        {
            jumlahKuadrat = b * b + c * c;
            double aKuadrat = a * a;
            if (jumlahKuadrat >= aKuadrat - toleransi &&
                jumlahKuadrat <= aKuadrat + toleransi)
 	            segitigaSikuSiku = true;
        }
    }

    if (segitigaSikuSiku)
        cout << "Segitiga siku-siku" << endl;
    else
        cout << "Bukan segitiga siku-siku" << endl;

    return 0;
}
