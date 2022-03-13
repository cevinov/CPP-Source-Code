// Contoh untuk menunjukkan efek break
//     pada for

#include <iostream>

using namespace std;

int main() {
    for (int bilangan = 1; bilangan <= 8; bilangan++) {
        if (bilangan == 5)
            break;

        cout << bilangan << endl;
    }

    return 0;
}
