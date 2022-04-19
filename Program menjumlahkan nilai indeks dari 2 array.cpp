#include <iostream>
using namespace std;

void fungsiArray();



int main(){
fungsiArray();

}


void fungsiArray(){
cout << "Menambahkan nilai indeks dari 2 array" << endl;
	
int arr1[] = {1,2};
int arr2[] = {5,500};
int hasil = 0;

for (int i=0; i < 2; i++){
hasil = hasil + arr1[i] +arr2[i]; 
}

cout << "Hasil nilai array : " << hasil;
}


	
	

