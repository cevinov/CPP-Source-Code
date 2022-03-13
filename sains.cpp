#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double data = 10.23456789;

    cout << data << endl;

    cout << setiosflags(ios::scientific);
    cout << data << endl;

    cout << resetiosflags(ios::scientific);
    cout << data << endl;

    return(0);
}
