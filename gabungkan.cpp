// Dua fungsi dengan nama sama

#include <iostream>
#include <sstream>   // Diperlukan oleh ostringsteram

using namespace std;

// Prototipe fungsi
string gabungkan(int bil1, int bil2);
string gabungkan(string str1, string str2);

int main() {
    cout << gabungkan(12, 34) << endl;
    cout << gabungkan("12", "34") << endl;

    return(0);
}

string gabungkan(int bil1, int bil2) {
    ostringstream oss(ostringstream::ate);
    oss << bil1 << bil2;
    return oss.str();
}

string gabungkan(string str1, string str2) {
    return str1 + str2;
}
