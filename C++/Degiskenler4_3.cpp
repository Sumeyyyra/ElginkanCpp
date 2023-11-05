#include <iostream>
#include <climits>
using namespace std;
#define led 5
int main()
{  

// define komutu 
/*bu emir ,sembolik değişmezliklerin tanımlanmasını sağlar.
Mİkro denetleyicilerin port tanımlarında da sıklıkla kullanılır.
*/
cout<<"sayi:"<<led;
//char değişkenleri '' ile atanır.
//string değerleri "" ile tanımlanır.

//Ornek

string isim,soyad;
int numara;
cout<<"isim girin:";
cin>>isim;
cout<<"soyad girin:";
cin>>soyad;
cout<<"numara girin:";
cin>>numara;
cout<<"\n****************\n";
cout<<"numaraniz:"<<numara<<endl<<"adiniz:"<<isim<<endl<<"soyadiniz:"<<soyad;
}
