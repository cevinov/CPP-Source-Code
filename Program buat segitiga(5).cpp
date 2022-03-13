#include <iostream>

using namespace std;

int main(){
	
cout<<"Program Membuat Pola Segitiga"<<endl;

	int n; 		//Nilai kotak

	int i; //Untuk mengatur tinggi/baris segitiga

	int j; //Untuk mengatur jarak depan * segitiga 

	int k; //Untuk mengatur jumlah * di tiap baris
	
cout<<"Masukkan Nilai N (N>3 || N<=9) : ";
cin>>n;

cout<<"Terima Kasih"<<endl<<endl;


//Seleksi input
while(n>3 && n<=9){


//Pola Segitiga

    for (int i = 1; i <= n; i++){ 		// Contoh i=1; N=5; i <= 5, Loop i++ jadi i = 5.
    
		for (int j = n; j > i; j--){	// Contoh N=5; j=5; j > 5, Loop j-- jadi j = 4
			cout<<" ";	
		}
		for (int k = 1; k <= (2 * i - 1); k++){ // Contoh k=1; k <= (2 * 5 - 1) = 9, Loop k++ jadi k = 9
			cout<<"5";
		}
		cout<<endl;
    }


    return(0);
}


}
