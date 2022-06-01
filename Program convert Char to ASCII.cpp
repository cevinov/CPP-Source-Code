#include<iostream>
using namespace std;
int funcLoop(); //Deklarasi fungsi prototipe (line 38).


int main(){
cout << "Program convert Char -> ASCII & ASCII -> Char" << endl;

char txt1, txt2, txt3, txt4;	//Membuat variabel bertipe char.
int option; 					//Variabel menyimpan hasil return value dari set (line 44).
int optionIF;
option = funcLoop();			//Variabel option memiliki nilai dari variabel set (line 43) berdasarkan input user (1/2).


while (option == 1 && optionIF != 02){	//Jika nilai option = 1(lanjut) & optionIF bukan = 02(Quit), maka baris kode berjalan (line 16 - 29).
cout << "Lanjut = 01 || Keluar Program = 02 : ";
cin >> optionIF;			//Opsi input, apakah user ingin melanjutkan program atau Quit.


	if (optionIF == 01){	//Jika nilai optionIF = 01, maka program menjalankan fungsi casting operator (Convert Char -> ASCII).
	cout << "Input Karakter : ";
	cin >> txt1 >> txt2 >> txt3 >> txt4;
	cout << "KODE ASCII = " << int(txt1) << " " << int(txt2) << " " << int(txt3) << " " << int(txt4) << " " << endl;
	}

	if (optionIF == 02){	//Jika optionIF = 02, maka program akan menampilkan cout dibawah. Menjelaskan bahwa user keluar dari program.
	cout << "Program Keluar" << endl; //Output yang akan tampil dari if ke-2 (line 22).
	}
}

if (option == 2 && option >= 2 && optionIF == 02){ 
//IF statement disini berfungsi untuk keluar dari looping while (line 15). Jika optionIF == 02 & option == 2.
}
}


//Membuat fungsi menu pilihan lanjut atau keluar dari program.
int funcLoop(){
int set; 	//Menyimpan nilai input user.

cout << "MENU Pilihan (1 = Lanjut Atau 2 = Keluar)" << endl; //Menu pilihan digunakan sebagai kondisi dari program, apakah run atau Quit.
cout << "Pilihan : ";
cin >> set;
return set; //Mereturn nilai input user ke variabel option (line 12).
}
