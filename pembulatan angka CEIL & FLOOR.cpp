#include <iostream>
#include <math.h>
using namespace std;

// Program Pembulatan Angka Keatas (ceil)
// Program Pembulatan Angka Kebawah (floor)

int main(){
	
double a;	
int hasilup, hasildown;	
int bulatup, bulatdown;
	
cout << "Pembulatan" << endl;	

cout << "Masukkan Angka : ";
cin >> a;

bulatup = ceil(a);
cout << "Hasil Pembulatan Atas : " << bulatup << endl;

bulatdown = floor(a);
cout << "Hasil Pembulatan Bawah : " << bulatdown << endl;
	
hasilup = bulatup % 7;
cout << "Hasil Modulo Atas : " << hasilup << endl;	

hasildown = bulatdown % 7;
cout << "Hasil Modulo Bawah : " << hasildown << endl;	
	
}
