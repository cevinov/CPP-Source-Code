#include<iostream>
using namespace std;
int funcLoop(); //Deklarasi fungsi prototipe (line 29).


int main(){

cout << "Program convert Char -> ASCII & ASCII -> Char" << endl;

char txt1, txt2, txt3, txt4;	//Membuat variabel bertipe char.
int option; 					//Variabel menyimpan hasil return value dari set (line 38).
option = funcLoop();			//Variabel option memiliki nilai dari variabel set (line 37) berdasarkan input user (1/2).


if (option == 1){				// Jika nilai option = 1 (lanjut), maka program akan menjalankan kode line program dibawahnya.
cout << "Input Karakter : ";
cin >> txt1 >> txt2 >> txt3 >> txt4;
cout << "KODE ASCII = " << int(txt1) << " " << int(txt2) << " " << int(txt3) << " " << int(txt4) << " " << endl;
}

	
if (option == 2 || option !=1){ //Memvalidasi jika hasil input tidak sesuai(1/2) atau user ingin keluar dari program.  
								//Maka kode line program pada if ke-1 akan diskip/tidak dijalankan (line 15).
}

option = funcLoop(); //Melakukan looping if kembali, bertujuan agar user bisa kembali mereplay program.
cout << "Program Keluar" << endl; //Output yang akan tampil dari if ke-2 (line 22).
}


//Membuat fungsi menu pilihan lanjut atau keluar dari program.
int funcLoop(){
int set; 	//Menyimpan nilai input user.

cout << "MENU Pilihan (1 = Lanjut Atau 2 = Keluar)" << endl;
cout << "Pilihan : ";
cin >> set;
return set; //Mereturn nilai input user ke variabel option (line 12).
}
