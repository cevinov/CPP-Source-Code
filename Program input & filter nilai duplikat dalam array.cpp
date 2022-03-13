#include<iostream>
using namespace std;
int main(){
	
	//Program mencari nilai yang duplikat
	
//Menentukan jumlah elemen array	
    int arr[100],range;
    cout<<"Tentukan Jumlah Elemen : "; //Contoh (ex: index[50])
    cin>>range;
    cout<<endl;
    
//Input nilai     
    for(int i = 1; i <= range; i++)
    {
    	cout<<"Masukkan Nilai : ";
    	cin>>arr[i]; //Hasil input nilai dari user
		cout<<endl;
	}
    
cout<<endl;

//Memfilter input nilai yang duplicate
cout<<"Hasil nilai yang duplikat\n"; 

	for(int i = 1; i <= range; i++)
		{
		for(int j = i+1; j <= range; j++) 
		//Statement (j = i+1) yakni default pointer, yang menyatakan bahwa nilai i sudah mencapai 100.
		{	  
			if(arr[i]==arr[j])//arr[i] = Main loop & arr[j] = Nested loop
			{	
			cout<<arr[i]<<"\n";
			}
 		}
	}
}




