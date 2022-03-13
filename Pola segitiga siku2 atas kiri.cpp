#include <iostream>
using namespace std;

//Pola segitiga siku2 kiri
int main (){


int a;

cout << " Input angka : ";

cin>>a;

// Loop n = baris (spasi) & int o kolom spasi
// m = baris (*) dan p kolom *

for (int n=1; n<=a; n++){ //mengatur baris
	for (int o=1; o<=n; o++) //mengatur kolom spasi
		cout<<" ";
	for (int m=a; m>=n; m--)
		cout<<"*";

cout<<endl;	
}

}


