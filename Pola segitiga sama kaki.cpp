#include <iostream>

using namespace std;

int main (){

int n;	

cout << " Pola segitiga sama kaki "<<endl;	
	cout << " Masukkan Bilangan : ";
	cin >> n;

// Coding Baris
// Baris spasi	
for(int j=1; j<=n; j++){ //Baris vertikal
	for(int k=n; k>j; k--) // Kolom horizontal
	cout<<" ";


//Baris *
	for (int l=1; l<=(2*j-1); l++)
	cout<<"*";	


cout<<endl;
	
	
}	
	
	}
	



