// Deret kuadrat

#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Deret kuadrat" << endl;
    cout << "-------------" << endl;

    cout << "n = ";
    cin >> n;

    for (int suku = 1; suku <= n; suku++) {
         cout << suku * suku << endl;
    }

    return(0);
}
