#include <iostream>
#include <math.h> 
using namespace std;
  
int main() {
 
   int bilc; 
   int bila;
   cout<<"Masukkan Nilai a:"; // Jumlah nilai
   cin>>bila;
   int bilb;
   cout<<"Masukkan Nilai b:"; // Jumlah nilai
   cin>>bilb;
   cout<<endl;
   
if(bila%2==0){
   	cout<<"Bilangan Genap"<<endl;
}else if (bila%2==1){
	cout<<"Bilangan Ganjil"<<endl;
}if(bilb%2==0){
   	cout<<"Bilangan Genap"<<endl;
}else if (bilb%2==1){
	cout<<"Bilangan Ganjil"<<endl;	
};

cout<<endl<<"hasil = "<<bila+bilb<<endl;

bilc = bila+bilb;
if(bilc%2==0){
   	cout<<"Bilangan Genap"<<endl;
}else if (bilc%2==1){
	cout<<"Bilangan Ganjil"<<endl;
	
	return 0;	
}

}
