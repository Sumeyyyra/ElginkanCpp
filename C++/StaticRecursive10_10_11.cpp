#include <iostream>

using namespace std;
static int x=10,y=5;
int fonk();

int main()
{
//Statik değişkenler

//statik değişkenler tanımdandıkları zaman
// o fonksiyonu terk edince değerini akybetmez aynı fonksiyon bir daha çalışınca daha önceki değer tekrar kullanılabilir.
cout<<x;
cout<<fonk()<<endl;
cout<<fonk();

//recursive 
//kendi kendini çağıran fonksiyon


}

int fonk()
{
   static int a=4;
   a++;
   return a;

}
