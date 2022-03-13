// Penukaran data argumen fungsi via pointer

#include <iostream>

using namespace std;

// Prototipe fungsi
void tukarkan(int *x, int *y);

int main() {
    int varA = 20;
    int varB = 73;

    cout << "Semula: varA = " << varA
         << ", varB = " << varB << endl;

    tukarkan(&varA, &varB);

    cout << "Kini  : varA = " << varA
         << ", varB = " << varB << endl;

    return 0;
}

void tukarkan(int *x, int *y) {
   int tmp = *x;
   *x = *y;
   *y = tmp;
}
