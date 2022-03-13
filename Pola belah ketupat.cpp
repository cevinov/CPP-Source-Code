#include <iostream>

using namespace std;

int main (){

int y;	

cout << " Pola belah ketupat "<<endl;	
	cout << " Masukkan Bilangan : ";
	cin >> y;
	
// Coding Baris
// Baris spasi
// Pola segitiga sama kaki
	
for(int j=1; j<=y; j++){ //Baris vertikal
	for(int k=y; k>j; k--) // Kolom horizontal
	cout<<" ";


//Baris *
	for (int l=1; l<=(2*j-1); l++)
	cout<<"*";	

cout<<endl; 
}
	
// Pola segitiga sama kaki terbalik

for (int n=2; n<=y; n++){ //mengatur baris
	for (int o=1; o<n; o++) //mengatur kolom spasi
	cout<<" ";
			
	for (int z=y; z>=(2*n-5); z--)
	cout<<"*";

cout<<endl;




}



}

