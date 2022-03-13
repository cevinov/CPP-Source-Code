#include<iostream>
using namespace std;
int main()
{
	
//HexaDecimal	
    int i;			//Perhitungan Hexadecimal
	int rem;		//Proses pembagian bilangan bulat > hexadesimal 
	char hexa[50]; 	//Hasil perhitungan hexadesimal

    
//Octal    
    int j; 			//Perhitungan octal
	int k = 1;		//Perhitungan octal 
	long num, temp;	//Input bilangan bulat dec > octal	
    int octal[50]; 	//Hasil perhitungan octal

//Binary
    int binary; 	//Hasil perhitungan binary

//Menu   
    int pilih; 		//Pilih menu
	int bil;		//Input bilangan bulat (Hexadecimal & Binary) 
    
cout<<" Program Konversi Bilangan Decimal"<<endl;
cout<<"1.Tabel Hexa"<<endl;
cout<<"2.Tabel Octal"<<endl;
cout<<"3.Tabel Binary"<<endl;

cout<<"Pilih Tabel Konversi[1/2/3] : ";cin>>pilih;
    
    
if(pilih==1){
//Program Tabel Hexadecimal

cout<<"Input Bilangan Decimal > Hexadecimal : ";
cin>>bil;    
    
    while(bil!=0)
    {
        rem = bil%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexa[i] = rem;
        i++;
        bil = bil/16;
    }
    cout<<"\nBilangan Hexadesimal: ";
    for(i=i-1; i>=0; i--)
        cout<<hexa[i];
    cout<<endl;
    return 0;
}

if(pilih==2){
//Program Tabel Oktal

cout<<"Input Bilangan Decimal > Octal : ";
cin>>num;    //Input bilangan dec > octal
temp = num;

 	while (temp != 0)
    {
        octal[k++] = temp % 8;
        temp = temp / 8;
    }
    cout << "\nBilangan Octal " << num << " : ";
    for (j = k - 1; j >= 0; j--)
        cout << octal[j];
    return 0;
}

if(pilih==3){
//Program Tabel Binary

cout<<"Input Bilangan Decimal > Binary : ";
cin>>bil;

while (bil > 0)
    {
        binary = bil % 2;
        cout << binary;
        bil /= 2;
    }    
}


else{
//Pilihan Default
cout<<"Menu Tidak Ditemukan";



}



}
