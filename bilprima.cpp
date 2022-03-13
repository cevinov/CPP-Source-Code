// Fungsi untuk menentukan bilangan
//     termasuk bilangan prima atau tidak

#include <iostream>

using namespace std;

// Prototipe fungsi
bool prima(int bilX);
void ujiBilanganPrima(int bilX);

int main() {
    ujiBilanganPrima(3);
    ujiBilanganPrima(7);
    ujiBilanganPrima(9);
    ujiBilanganPrima(11);

    return(0);
}

bool prima(int bilX) {
    bool prima = true;
    for (int bil = 2; bil <= bilX / 2; bil++)
        if (bilX % bil == 0) {
            prima = false;
            break;
        }

    return prima;
}

void ujiBilanganPrima(int bilX) {
    if (prima(bilX))
        cout << bilX << " adalah bilangan prima"
             << endl;
    else
        cout << bilX << " bukan bilangan prima"
             << endl;
}
