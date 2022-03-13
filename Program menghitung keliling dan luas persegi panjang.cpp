#include <iostream>
using namespace std;


//Program menghitung keliling dan luas persegi panjang
//Rumus Hitung Fungsi
double hasil_luas (double p, double l){
double hasil_luas = p * l;
return hasil_luas;
}

double hasil_keliling (double p, double l){
double hasil_keliling = 2 * (p + l);
return hasil_keliling;
}

// Fungsi Void
//Rumus Panggilan Void Cout
void hasil_hitungLS(double hasilLS){
cout << "Hasil fungsi void Luas: ";
cout << hasilLS << endl;
}

void hasil_hitungKL(double hasilKL){
cout << "Hasil fungsi void Keliling: ";
cout << hasilKL << endl;
}


// Menghitung Luas Persegi Panjang
int main(){
	
	
double Panjang, Lebar, hasilLS, hasilKL;

cout << "Masukkan Panjang : ";
cin >> Panjang;
cout << "Masukkan Lebar : ";
cin >> Lebar;
cout<<endl;

//Rumus Memanggil Fungsi Void

cout << "Luas : " << Panjang << "x" << Lebar<<endl;
hasilLS = hasil_luas(Panjang,Lebar);
hasil_hitungLS(hasilLS);

cout<<endl;

cout << "Keliling : " << "2 x "<< "(" << Panjang << "+" << Lebar<<")"<<endl;
hasilKL = hasil_keliling(Panjang,Lebar);
hasil_hitungKL(hasilKL);

	
}
	
	
	
	


