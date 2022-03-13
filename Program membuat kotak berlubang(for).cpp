#include <iostream>

using namespace std;

int main(){
	
cout<<"Program Membuat Pola Kotak"<<endl;
	
	int n; 		//Nilai kotak

	int kolom;	//Untuk mengatur jumlah banyak *

	int baris;	
	//Untuk mengatur tinggi. 		Contoh N=5 & int baris = 4; baris <= n - 2, maka tinggi kotak adalah 2
	
	//Untuk mengatur baris kotak.	Contoh N=5 & int baris = 1; baris <= n - 3, maka jumlah baris ada 4 			
	
	cout<<"Masukkan Nilai (N>3 || N<=9) : ";
	cin>>n;


//Kondisi while salah
	cout<<"Terima Kasih";
	cout<<endl;


//Seleksi nilai (N>3 || N<=9)
while(n>3 && n<=9){	


//Pola kotak berlubang		
for (int kolom = 1; kolom <= 2 * n; kolom++) 
	cout<<"*"; //Karakter bintang
	cout<<endl;
	
for (int baris = 1; baris <= n - 2; baris++){
	cout<<"*";
	
	for (int kolom = 1; kolom < 2 * n-1; kolom++) //Mengatur jumlah banyak * dibagian atas & bawah kotak
		cout<<" "; //Karakter spasi
		
	cout<<"*";
		
cout<<endl;
	
}	


//Tampilkan simbol *
for (int kolom = 1; kolom <= 2 * n; kolom++)
	cout<<"*";
cout<<endl<<endl;	


//Pola kotak berisi

for (int kolom = 1; kolom <= 2 * n; kolom++) 
	cout<<"*"; //Karakter bintang
	cout<<endl;
	
for (int baris = 1; baris <= n - 2; baris++){
	cout<<"*";
	
	for (int kolom = 1; kolom < 2 * n-1; kolom++)
		cout<<"*"; //Karakter spasi
		
	cout<<"*";
		
cout<<endl;
	
}	


//Tampilkan simbol *
for (int kolom = 1; kolom <= 2 * n; kolom++)
	cout<<"*";
cout<<endl;	

break;
	
}

}


















	

