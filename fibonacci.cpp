// Deret Fibonacci

#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Deret Fibonacci dengan n suku"
         << endl;
    cout << "============================="
         << endl;

    cout << "n = ";
    cin >> n;

    int fn1 = 1;
	int fn2 = 1;

	cout << 1 << " ";
	cout << 1 << " ";

	int fn = fn1 + fn2;
	int indeks = 3;
	while (indeks <= n) {
        cout << fn << " ";

        fn1 = fn2;
        fn2 = fn;
        fn = fn1 + fn2;
        indeks = indeks + 1;
	}

    return(0);
}
