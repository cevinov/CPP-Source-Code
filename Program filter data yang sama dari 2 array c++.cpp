#include<iostream>
using namespace std;
int main(){
	
	//Program mencari nilai yang duplikat

int arrL[10] = {5,6,7,8,5,9,8,3,8,3};
int arrM[10] = {3,4,1,2,1,3,1,5,9,8};
int arrN[10];

//Memfilter input nilai yang duplicate
cout<<"Hasil nilai yang duplikat\n"; 

	for(int i = 1; i <= 10; i++)
		{
		for(int j = 1; j <= 10; j++) 
		{	  
			if(arrL[i]==arrM[j])//arrL[i] = Main loop & arrM[j] = Nested loop
			{	
			cout<<arrL[i]<<"\n";
			}
 		}
	}
}



