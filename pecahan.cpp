#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float bil = 123.456;

    cout << setiosflags(ios::fixed);
    cout << bil << endl;
    cout << setprecision(2) << bil << endl;
    cout << setprecision(3) << bil << endl;
    cout << setprecision(4) << bil << endl;
    cout << setprecision(5) << bil << endl;
    cout << setprecision(5)
         << setw(12) << bil << endl;

    return(0);
}
