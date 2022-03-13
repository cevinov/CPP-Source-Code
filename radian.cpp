// Konversi derajat ke radian

#include <iostream>

using namespace std;

int main() {
    double derajat;

    cout << "Konversi derajat ke radian" << endl;
    cout << "--------------------------" << endl;

    cout << "Derajat = ";
    cin >> derajat;

    // Derajat ke radian
    double radian = derajat * 0.017453277;

    // Tampilkan hasilnya
    cout << "Radian = " << radian << endl;

    return(0);
}
