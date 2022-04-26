#include <iostream>
#include <string>

using namespace std;

int main(){
	
cout <<"Program Mencari Substring 'a'"<< endl;

string input;
int jum_sub = 0;

cout << "Masukkan Kalimat : ";
getline (cin, input);


//Pencarian & Perhitungan substing

int pos = 0;


do {
	int hasil_sub = input.find("a", pos);
	if (hasil_sub == -1)
	break;
	
	jum_sub++;
	pos = hasil_sub + 1;	
}

while (pos <= input.length() - 1);

cout <<"Hasil Cari Substring 'a' = " << jum_sub << endl;
	
}
	







