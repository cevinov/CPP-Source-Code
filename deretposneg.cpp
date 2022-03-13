// Deret bilangan positif dan negatif bergantian

#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Deret 1 -3 5 -7 9 -11 ..." << endl;
    cout << "-------------------------" << endl;

    cout << "n = ";
    cin >> n;

    int pengali = -1;
    int bilangan;

    for (int suku = 1; suku <= n; suku++) {
        pengali = -1 * pengali;
        bilangan = (2 * suku -1) * pengali;
        cout << bilangan << endl;
    }

    return(0);
}
