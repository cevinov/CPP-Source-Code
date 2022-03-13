// Penentuan lulus atau tidak

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int nilai;

    cout << "Penentuan lulus atau tidak"
         << endl;
    cout << "Nilai = ";
    cin >> nilai;

    bool lulus = nilai >= 60;
    string hasil =  lulus ? "Lulus": "Tidak lulus";
    cout << hasil << endl;

    return(0);
}
