// Program untuk menunjukkan efek continue
//     pada for

#include <iostream>

using namespace std;

int main() {
    for (int bilangan = 1; bilangan <= 8; bilangan++) {
        if (bilangan == 5)
             continue;

         cout << bilangan << endl;
    }

    return 0;
}
