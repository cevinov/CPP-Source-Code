// Pengurutan data menggunakan qsort()

#include <iostream>
#include <cstdlib>    // Diperlukan oleh qsort()

using namespace std;

const int JUM_DATA = 12;

int urutNaik(const void* x, const void* y);
int urutTurun(const void* x, const void* y);

int main() {
    int daftarBil[JUM_DATA] = {
        3, 78, 99, 23, 2, 7, 45, 12, 34, 51, 7, 81
    };

    qsort(daftarBil, JUM_DATA, sizeof(int), urutNaik);

    cout << "Urut naik:" << endl;
    for (int j = 0; j < JUM_DATA; j++)
        cout << daftarBil[j] << ' ';

    cout << endl;

    qsort(daftarBil, JUM_DATA, sizeof(int), urutTurun);

    cout << endl;
    cout << "Urut turun:" << endl;
    for (int j = 0; j < JUM_DATA; j++)
        cout << daftarBil[j] << ' ';

    cout << endl;

    return 0;
}

int urutNaik(const void* x, const void* y) {
    if (*(int*)x < *(int*)y)
        return -1;
    else
        if (*(int*)x > *(int*)y)
            return 1;
        else
            return 0;
}

int urutTurun(const void* x, const void* y) {
    if (*(int*)x > *(int*)y)
        return -1;
    else
        if (*(int*)x < *(int*)y)
            return 1;
        else
            return 0;
}
