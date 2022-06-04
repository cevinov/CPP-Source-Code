#include <string>
#include <iostream>
using namespace std;
char loopWhile();           //Deklarasi prototipe fungsi.
int loopIF();
void gameTebakKata();

//Struktur body kode main.
int main(){
char retryWhile;
int retryIF;

retryWhile = loopWhile();   //Menerima return value dari fungsi loopWhile (line 35).
retryIF = loopIF();         //Menerima return value dari fungsi loopIF (line 44).


while (retryWhile == 'y' || retryWhile =='Y' && retryIF != 2){                      //Program akan terus mengulang selama kondisi while terpenuhi.

if (retryWhile == 'Y' || retryWhile == 'y' && retryIF == 1 && retryIF != 2){        //Program akan meminta validasi pengulangan sekali lagi, program terus berjalan selama kondisi if terpenuhi (Continue).
gameTebakKata();

	if (retryWhile == 'N' || retryWhile == 'n' && retryIF == 2 && retryIF != 1){    //Jika validasi pada line berikut terpenuhi, maka program akan berhenti berjalan (Quit). 
	cout << "Program Berakhir "; 
	}
}

retryWhile = loopWhile();   //Pemanggilan fungsi, memberi input apakah user ingin menjalankan/Continue program kembali atau berhenti/Quit.
retryIF = loopIF();         //Fungsi ini dideklarasikan didalam body looping while.
}

cout << "Program Berakhir "; //Memberi penjelasan bahwa program telah berhenti berjalan.
}


//Fungsi Pengulangan While, berfungsi agar program terus menerus running selama user meng-iyakan hal tersebut.
char loopWhile(){
char loopW;    
cout << " Coba Lagi ? Y/N : ";
cin >> loopW;
return loopW;    
}


//Fungsi IF Statement, bertujuan untuk keluar dari looping while. Sehingga user tidak stuck berada didalam program terus-menerus.
int loopIF(){
int loopI;    
cout << "1 = Lanjut | 2 = Quit : ";
cin >> loopI;
return loopI;    
}


//Fungsi Program Tebak Kata, membuat body program game tebak kata.
void gameTebakKata(){
cout << "Game Tebak Kata" << endl;

	string clue;
    string answer;
    string jawabTebak;

	
	cout << "Press Enter Start Game " << endl; //Pada fungsi ini berguna agar setiap input/output yang ingin ditampilkan diconsole tidak ter-skip. Contoh line 65 - 73.
	getline(cin, jawabTebak);
	getline(cin, jawabTebak);
				
	cout << "Masukkan Jawaban Tebakan : ";
	getline(cin, jawabTebak);			
	cout << " Masukkan Clue : ";
	getline(cin, clue);
	system("cls");    
	
	cout <<"Clue Tebakan : " << clue << endl;
	cout << "Jawaban : ";
	getline(cin, answer);
	
	(jawabTebak == answer) ? cout << "Tebakan Benar !!" << endl : cout << "Tebakan Salah !!" << endl; //Fungsi ternary operator, bertujuan menentukan apakah jawaban tebakan benar atau salah.
}





