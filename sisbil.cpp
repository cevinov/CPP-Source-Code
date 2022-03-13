#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int bulat = 121;

    cout << "Tanpa tanda sistem bilangan:" << endl;
    cout << "Desimal     : " << bulat << endl;
    cout << "Heksadesimal: "
         << hex << bulat << endl;
    cout << "Oktal       : "
         << oct << bulat << endl;
    cout << "Desimal     : "
         << dec << bulat << endl;

    cout << setiosflags(ios::showbase) << endl;
    cout << "Dengan tanda sistem bilangan:" << endl;
    cout << "Desimal     : " << bulat << endl;
    cout << "Heksadesimal: "
         << hex << bulat << endl;
    cout << "Oktal       : "
         << oct << bulat << endl;
    cout << "Desimal     : "
         << dec << bulat << endl;

    cout << endl;
    cout << "Khusus heksadesimal:" << endl;
    cout << setiosflags(ios::uppercase) << hex;
    cout << "ios::uppercase : "
         << bulat << endl;
    cout << resetiosflags(ios::uppercase);
    cout << "Tanpa uppercase: "
         << bulat << endl;

    return(0);
}
