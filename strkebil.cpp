// Konversi string ke bilangan

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
    cout << "Konversi bilangan ke string"
         << endl;
    cout << "---------------------------"
         << endl;

    char str[] = " 29.6 derajat Celcius";

    cout << "atoi(\"" << str << "\"): " << atoi(str)
         << endl;
    cout << "atol(\"" << str << "\"): " << atol(str)
         << endl;
    cout << "atof(\"" << str << "\"): " << atof(str)
         << endl;

    strcpy(str, "Dua puluh sembilan");
    cout << "atoi(\"" << str << "\"): " << atoi(str) << endl;

    return 0;
}
