#include <iostream>
using namespace std;

void fungsiArray();

int main(){
fungsiArray();
}

// Cari indeks nilai dari array1 dan array2, yang jika ditotalkan nilai indeksnya menghasilkan OUTPUT 51

void fungsiArray(){
cout << "Mencari total nilai array yang ditentukan" << endl;
int arr1[] = {1,2};
int arr2[] = {5,50};
int hasil1, hasil2, hasil3, hasil4;


for (int i=0; i < 2; i++){
hasil1 = arr1[0] + arr2[0];
hasil2 = arr1[1] + arr2[1];

hasil3 = arr1[1] + arr2[0];
hasil4 = arr1[0] + arr2[1];
}

if (hasil1 == 51 | hasil2 == 51 || hasil3 == 51 || hasil4 == 51){
	cout << "Filter Nilai Berhasil (51)" << endl;
}	
else{
	cout << "Data Tidak Ditemukan" <<endl;
}
cout << "Nilai array : " <<hasil4;
}


	
	

