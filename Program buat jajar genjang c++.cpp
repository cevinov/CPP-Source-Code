#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int bil, i, j;

//i = Untuk mengatur tinggi jajar genjang & banyak *.
//j = Untuk mengatur jarak depan*.(Tinggi)


cout<<"Program Membuat Jajar Genjang"<<endl;
cout<<"Masukan angka: ";
cin>>bil;
cout<<endl;
cout<<"Gambar Jajar Genjang"<<endl;
if((bil>0)&&(bil<=bil))
{
for(i=bil;i>=4;i--) 

/*	Contoh penggunaan variabel i
	n=9 > tinggi=6 ( i>=4) selisih = 3
	n=9 > tinggi=5 ( i>=5) selisih = 4	*/

{
for(j=1;j<i;j++)
{
cout<<" ";
}
for(j=1;j<=bil;j++)
{
cout<<"*";
}
cout<<endl;
}
}
getch();
}
