#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
	
char n_p;
do{

    cout<< "=================== Daftar Produk Swalayan =============================" << endl;
    cout<< "========================================================================" << endl;
   	cout<< "No----------Nama Produk----------------------------Harga----------------" << endl;
    cout<< "1. 		Minyak Sayur			Rp. 15,000,-		|"<<endl;
    cout<< "2. 		Telur				Rp. 20,000,-/kg		|"<<endl;
    cout<< "3. 		Paket Sayuran 			Rp. 35,000, 		|"<<endl;
    cout<< "4. 		Beras				Rp. 50,000,-/Ltr	|"<<endl;
    cout<< "5. 		Paket Bumbu Dapur		Rp. 25,000,- 		|"<<endl; 
    cout<< "========================================================================" << endl;
    
    
unsigned int a;				 // produk katalog
unsigned int j_b;			 // jumlah pembelian produk
unsigned int harga;			 // harga produk	
unsigned int t_h;			 // total harga produk	
unsigned int bayar;			 // melakukan pembayaran
unsigned int kembali;		 // kembalian pembayaran	
unsigned int diskon;			 // jumlah diskon
unsigned int cut;		 	 // potongan diskon

// Proses input produk

cout<<"\nPilih Produk : ";
cin>>a;


//Proses perhitungan

switch(a)
{
	
// Case 1	
	
case 1:
cout<<'\n'<<"Minyak Sayur"<<endl;	
harga = 15000;

cout<<"\nTotal produk yang ingin dibeli = ";
cin>>j_b;												// input jumlah beli	

t_h = j_b * harga; 										// perhitungan total harga
cout<<"Total Harga 					  = Rp. "<<t_h<<endl;

cout<<"Pembayaran 			 		  = Rp. ";		 			// perhitungan pembayaran 
cin>>bayar;
				
kembali = bayar - t_h;									// perhitungan kembali pembayaran
cout<<"Kembalian		     		          = Rp. "<<kembali<<endl;
cout<<""<<endl;
 
cut  = (t_h*0.3) + kembali;
cout<<"Cashback Sebesar 30%"<<endl;
cout<<"Total Kembali Belanja  		  		  = Rp. "<<cut<<endl; 		
break; 		

// Case 2

case 2:
cout<<'\n'<<"Telur"<<endl;	
harga = 20000;

cout<<"\nTotal produk yang ingin dibeli = ";
cin>>j_b;												// input jumlah beli	

t_h = j_b * harga; 										// perhitungan total harga
cout<<"Total Harga 					  = Rp. "<<t_h<<endl;

cout<<"Pembayaran 			 		  = Rp. ";		 			// perhitungan pembayaran 
cin>>bayar;
				
kembali = bayar - t_h;									// perhitungan kembali pembayaran
cout<<"Kembalian		     		          = Rp. "<<kembali<<endl;
cout<<""<<endl;
 
cut  = (t_h/10) + kembali;
cout<<"Cashback Sebesar 10%"<<endl;
cout<<"Total Kembali Belanja  		  		  = Rp. "<<cut<<endl; 		
break;	

// Case 3

case 3:
cout<<'\n'<<"Paket Sayuran"<<endl;	
harga = 35000;

cout<<"\nTotal produk yang ingin dibeli = ";
cin>>j_b;												// input jumlah beli	

t_h = j_b * harga; 										// perhitungan total harga
cout<<"Total Harga 					  = Rp. "<<t_h<<endl;

cout<<"Pembayaran 			 		  = Rp. ";		 			// perhitungan pembayaran 
cin>>bayar;
				
kembali = bayar - t_h;									// perhitungan kembali pembayaran
cout<<"Kembalian		     		          = Rp. "<<kembali<<endl;
cout<<""<<endl;
 
cut  = (t_h/10) + kembali;
cout<<"Cashback Sebesar 10%"<<endl;
cout<<"Total Kembali Belanja  		  		  = Rp. "<<cut<<endl; 		
break;	

// Case 4

case 4:
cout<<'\n'<<"Beras"<<endl;	
harga = 50000;

cout<<"\nTotal produk yang ingin dibeli = ";
cin>>j_b;												// input jumlah beli	

t_h = j_b * harga; 										// perhitungan total harga
cout<<"Total Harga 					  = Rp. "<<t_h<<endl;

cout<<"Pembayaran 			 		  = Rp. ";		 			// perhitungan pembayaran 
cin>>bayar;
				
kembali = bayar - t_h;									// perhitungan kembali pembayaran
cout<<"Kembalian		     		          = Rp. "<<kembali<<endl;
cout<<""<<endl;
 
cut  = (t_h/10) + kembali;
cout<<"Cashback Sebesar 10%"<<endl;
cout<<"Total Kembali Belanja  		  		  = Rp. "<<cut<<endl; 		
break; 	 		

// Case 5

case 5:
cout<<'\n'<<"Paket Bumbu Dapur"<<endl;	
harga = 25000;

cout<<"\nTotal produk yang ingin dibeli = ";
cin>>j_b;												// input jumlah beli	

t_h = j_b * harga; 										// perhitungan total harga
cout<<"Total Harga 					  = Rp. "<<t_h<<endl;

cout<<"Pembayaran 			 		  = Rp. ";		 			// perhitungan pembayaran 
cin>>bayar;
				
kembali = bayar - t_h;									// perhitungan kembali pembayaran
cout<<"Kembalian		     		          = Rp. "<<kembali<<endl;
cout<<""<<endl;
 
cut  = (t_h/10) + kembali;
cout<<"Cashback Sebesar 10%"<<endl;
cout<<"Total Kembali Belanja  		  		  = Rp. "<<cut<<endl; 		
break; 	

// Default
default:
	cout<<"Produk Tidak Tersedia"<<endl;	
}

// Pengulangan Perintah

cout<<"\nLanjut Belanja y/t ? ";							// input lanjut belanja
cin>>n_p;
system("cls"); 		

}

// Perhentian Pengulangan

while (n_p!='t');
cout<<"Terimakasih Atas Kunjugan Anda"<<endl;
return 0;

}






