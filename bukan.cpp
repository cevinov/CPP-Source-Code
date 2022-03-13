// Penggunaan operator !

#include <iostream>

using namespace std;

int main() {
    cout << "Operator !" << endl;
    cout << "----------" << endl;

    bool keadaan = false;

    cout << "Nilai keadaan pada awal = "
         << keadaan << endl;

    keadaan = !keadaan;
    cout << "Nilai keadaan melalui !keadaan = "
         << keadaan << endl;

    keadaan = !keadaan;
    cout << "Nilai keadaan melalui !keadaan = "
         << keadaan << endl;

    return(0);
}
