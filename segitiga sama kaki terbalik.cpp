#include <iostream>

using namespace std;

//Pola segitiga siku2 kiri
int main (){
int y;


cout << " Pola segitiga sama kaki terbalik "<<endl;	
	cout << " Masukkan Bilangan : ";
	cin >> y;
	
// Loop n = baris (spasi) & int o kolom spasi
// m = baris (*) dan p kolom *


for (int n=1; n<=y; n++){ //mengatur baris
	for (int o=1; o<n; o++) //mengatur kolom spasi
		cout<<" ";
			
	for (int z=y; z>=(2*n-5); z--)
		cout<<"*";
	
cout<<endl;	
}

}
