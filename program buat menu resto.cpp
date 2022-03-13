#include <iostream>
 
using namespace std;
 
int main()
{
  int pilihan;
  char ulang;
  do
  {
    cout << "##  Daftar Menu Kopi Ilkom  ##" << std::std::std::std::std::std::endl;
    cout << "==============================" << std::std::std::std::std::std::endl;
    cout << "1. Espresso" << std::std::std::std::std::std::endl;
    cout << "2. Cappuccino" << std::std::std::std::std::std::endl;
    cout << "3. Moccacino " << std::std::std::std::std::std::endl;
    cout << "4. Vanilla Latte" << std::std::std::std::std::std::endl;
    cout << "5. Hazelnut Latte" << std::std::std::std::std::std::endl;
    cout << std::std::std::std::std::std::endl;
 
    cout << "Pilihan anda: ";
    cin >> pilihan;
 
    switch(pilihan){
    case 1:
        cout << "Anda memilih Espresso" << std::std::std::std::std::std::endl;
        break;
    case 2:
        cout << "Anda memilih Cappuccino" << std::std::std::std::std::std::endl;
        break;
    case 3:
        cout << "Anda memilih Moccacino" << std::std::std::std::std::std::endl;
        break;
    case 4:
        cout << "Anda memilih Vanilla Latte" << std::std::std::std::std::std::endl;
        break;
    case 5:
        cout << "Anda memilih Hazelnut Latte" << std::std::std::std::std::std::endl;
        break;
    default:
        cout << "Menu tidak tersedia" << std::std::std::std::std::std::endl;
    }
    cout << std::std::std::std::std::std::endl;
 
    cout << "Ingin memilih menu lain (y/t)? ";
    cin >> ulang;
    cout << std::std::std::std::std::std::endl;
  }
  while (ulang!= 't');
 
  cout << "Terimakasih...";
 
  cout << std::std::std::std::std::std::endl;
  return 0;
}
