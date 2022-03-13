// Fungsi dengan nilai balik berupa
//    pointer yang menunjuk ke
//    lima bilangan acak

#include <iostream>
#include <cstdlib>  // Diperlukan oleh rand()
#include <ctime>    // Diperlukan oleh srand()

using namespace std;

int* perolehAcak();

int main()
{
    int *ptrBil = perolehAcak();
    int *ptrSementara = ptrBil;

    for (int j = 0; j < 5; j++) {
        cout << *ptrSementara << endl;
        ptrSementara++;
    }

    return 0;
}

int* perolehAcak() {
    static int bilangan[5];

    srand (time(NULL));
    for (int j = 0; j < 5; j++)
        bilangan[j] = rand() % 100;

    int* ptr = bilangan;

    return ptr;
}
