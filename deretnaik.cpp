// Deret 1 3 6 10 15 21 28 36 45 55 66 78 …

#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Deret 1 3 6 10 15 21 28 36 45 55 66 78 ..."
         << endl;
    cout << "------------------------------------------"
         << endl;

    cout << "n = ";
    cin >> n;

    int bilangan = 0;
    for (int suku = 1; suku <= n; suku++) {
        bilangan = bilangan + suku;
        cout << bilangan << " ";
    }

    cout << endl;

    return(0);
}
