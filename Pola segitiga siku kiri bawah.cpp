#include <iostream>

using namespace std;

int main (){

int n;	

cout << " Pola segitiga siku siku arah kiri (Bawah) "<<endl;	
	cout << " Masukkan Bilangan : ";
	cin >> n;

// Coding Baris
// Baris spasi	
for(int j=1; j<=n; j++){
	for(int k=n; k > j; k--){
	cout<<" ";

}
		
//Baris *
for (int l=1; l<=j; l++){
	cout<<"*";
	
	
}	
cout<<endl;	
	}
	
}


