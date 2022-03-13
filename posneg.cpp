// Penentuan bilangan negatif, nol, dan positif

#include <iostream>

using namespace std;

int main() {
    cout << "Penentuan bilangan negatif, nol, dan positif" << endl;
    cout << "--------------------------------------------" << endl;

    float bilangan;

    cout << "Bilangan = ";
    cin >> bilangan;

    // Penentuan bilangan negatif, nol, dan positif
    if (bilangan < 0)
        cout << "Bilangan negatif" << endl;
    else
        if (bilangan == 0)
            cout << "Bilangan nol" << endl;
        else
            cout << "Bilangan positif" << endl;

     return(0);
}
