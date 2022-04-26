#include <iostream>
#include <string>

using namespace std;

int main(){
	
cout <<"Program Menghitung Jumlah Karakter String"<< endl;

string input;
int jum_huruf = 0;

cout << "Masukkan Kalimat : ";
getline (cin, input);


//Pencarian & Perhitungan Jum Karakter

int jum_karakter = 0;
int indeks = 0;

while (input[indeks] != '\0'){
	jum_karakter++;
	indeks++;
	
}
cout <<"Hasil Hitung = " << jum_karakter << endl;
	
}






