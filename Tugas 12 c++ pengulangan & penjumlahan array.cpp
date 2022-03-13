#include <iostream>

using namespace std;

int main(){
	int x[3] = {1,5,4};
	int y[3] = {3,2,5};
	
for (int i=0;i<3;i++){
	cout<<"array x "<<i<<" : "<<x[i]<<endl;
}
cout<<endl;

for (int i=0;i<3;i++){
	cout<<"array y "<<i<<" : "<<y[i]<<endl;
}
cout<<endl;

for (int i=0;i<3;i++){
cout<<"Array Penjumlahan "<<i<<": "<<x[i]+y[i]<<endl;
}

}
