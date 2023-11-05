#include <iostream>
#include <iomanip>
using namespace std;

const float pi=3.1415;

int main()
{
/*OPERATÖRLER
+,-,*,/,%
*/

//ornek:dairenin alan hesabı
int yaricap=12;

float alan=yaricap*yaricap*pi;
//setprecision(x) x basamaklı şekilde o tarırdakileri ekrana yazdır demek oluyor.
cout<<setprecision(4)<<"alan: "<<alan<<endl<<alan;

//ornek1 :4 islem

int sayi1,sayi2;


cin>>sayi1;
cin>>sayi2;
cout<<sayi1+sayi2<<endl;
cout<<sayi1-sayi2<<endl;
cout<<sayi1*sayi2<<endl;
cout<<(float)sayi1/(float)sayi2<<endl;

}
