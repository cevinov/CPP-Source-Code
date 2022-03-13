#include <iostream>

using namespace std;
  
int hitung(int a, int b){
int hasil;
hasil = a*b;
return hasil;

}

int main(){
int hasil;
int a;
cout<<"Masukkan Alas Segitiga : ";
cin>>a;
int b;
cout<<"Masukkan Tinggi Segitiga : ";
cin>>b;

hasil = hitung(a,b);
hasil = hasil /2;
cout<<hasil;	
}
	

