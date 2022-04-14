#include <iostream>
using namespace std;

int main(){
	
cout << " Program Seleksi Beasiswa " << endl;
	
int mtk,fsk;

/*
Minimal Nilai :

Matematika min 80
Fisika min diatas 85

*/
cout << endl;


cout << "Masukkan Nilai Matematika (0-100) : ";
cin	>> mtk;

cout << "Masukkan Nilai Fisika (0-100) : ";
cin	>> fsk;
	
// IF Matematika

if (mtk >= 80 ){
cout << "Nilai Matematika LULUS" << endl;
}

else{

 	cout << "Nilai Matematika TIDAK LULUS" << endl;
}

// IF Fisika
if (fsk > 85 ) {

cout << "Nilai Fisika LULUS" << endl;
}

else{
 	cout << "Nilai Fisika TIDAK LULUS" << endl;
 }



int total_nilai = mtk + fsk;

// IF Total Nilai
if (total_nilai >= 165 ) {

cout << "Selamat Anda LULUS Seleksi Beasiswa" << endl; 
 		
}

else if (total_nilai <= 165 ){
 	cout << "Maaf Anda TIDAK LULUS Seleksi Beasiswa" << endl;
 }
 
}

