#include <iostream>
#include <iomanip>
using namespace std;

const float pi=3.1415;

int main()
{
/* BİRLEŞİK ATAMA OPERATÖRLERİ
 +=
 -=
 /=
 *=
 c++
 b--

 a=3 b=++a; != a=3 b=a++;  ç
 çünlü cpp de yuarıdan aşağı ve ssağdan sola bir okuma vardır.
 ilk durumda önce a yı arttırı sonra atar a=4 b=4
 iknic durumda önce a yı atar sonra ayı arttrır. a=4 b=3
*/

/*
 MANTIKSAL OPERATÖRLER
 ! , && ,||

 ? => SONUÇ = ŞART SONUÇ1 : SONUÇ2 ;
 1 SE İLK DEĞER 0SA İKİNCİ DEĞERİ DÖNÜYOR.




*/

//ORNEK3 : 3 sayi al ve toplamını karesi 500 den küçükse geçerli değilse geçersiz yaz.

int a,b,c;

int toplam;


cin>>a;
cin>>b;
cin>>c;

toplam = a+b+c;
cout<<"toplam="<<toplam;
(toplam*toplam) >=500 ? cout<<"\ngecerli":cout<<"\ngecersiz";



}
