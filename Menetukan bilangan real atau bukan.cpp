#include<iomanip>
#include<iostream>

using namespace std;


int main(){
int x;	
	cout<<"Program SETW"<<endl;

//Input Bilangan	
cout<<"Masukkan Bilangan "<<" : ";
	cin>>x;

cout<<setfill('*')<<endl;
cout<<"Hasil = "<<x<<endl;
cout<<"Atau  = "<<setw(10)<<x;	
}
