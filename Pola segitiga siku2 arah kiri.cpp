#include <iostream>
using namespace std;

//Pola segitiga 1
int main (){


int b;

cout << " Input angka : ";

cin>>b;

for (int n=1; n<=b; n++){ //mengatur baris
	for (int o=b; o>n; o--) //mengatur kolom spasi
		cout<<" ";
	for (int m=1; m<=n; m++)
		cout<<"*";

cout<<endl;	
}

}
