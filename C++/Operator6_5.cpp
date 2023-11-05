#include <iostream>
#include <math.h>
using namespace std;



int main()
{
 //ORNEK: kullanıcı 2 sayi girecek. İLk sayinin 5e göre modu ,
 //ikinci sayinin 3e göre modu alıncak ve çıkan sonuçların toplamının küpün ekrana yazılacak.   

int a,b;

cin>>a;
cin>>b;

int mod5,mod3;
int sonuc;
mod5=a%5;
mod3=b%3;
//üss alma fonksiyonu
sonuc = pow((mod3+mod5),3);

cout<<sonuc<<endl;

//ORNEK:2nin 5'e kadar kuvvetleri

int n=2;
cout<<pow(n,2)<<endl;
cout<<pow(n,3)<<endl;
cout<<pow(n,4)<<endl;
cout<<pow(n,5)<<endl;

//<math.h> fonksiyonları

/*
ceil -- xi yukarı yuvarlar
floor -- xi aşağı yuvarlar
fabs -- xin mutlak değerini hesaplar
sqrt -- xin karekökünü hesaplar
fmod(x,y) --x/y nin kalanını hesaplar
pow(x,y) --xin y. üssünü alır.
log -- xin doğal logaritmasını hesaplar
log10 --xin 10 tabanındaki logaritmasını hesaplar
exp -- e^xi hesaplar.
*/

}
