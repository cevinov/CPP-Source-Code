#include <iostream>
using namespace std;

// Fungsi void rumus volume balok
double rumus_volume(double p, double l, double t){
double rumus_volume = p * l * t;
	return rumus_volume;
	
}

//Fungsi panggil cout 
void hitung_volume(double hasil_volume){
	cout << "Hasil Volume Balok : ";
	cout << hasil_volume << endl;

}


int main(){
	
double p, l, t, hasil_volume;
	
cout << "Program Menghitung Volume Balok" <<endl;

cout <<	"Panjang : ";
cin  >> p;
cout << "Lebar : ";
cin  >> l;
cout << "Tinggi : ";
cin  >> t;
	
//Hitung
cout << "Proses Hitung " << 'p' << " x " << 'l' << " x " << 't' << endl;
hasil_volume = rumus_volume(p, l, t);
hitung_volume(hasil_volume);
	
	
}
