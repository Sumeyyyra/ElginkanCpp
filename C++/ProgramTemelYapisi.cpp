#include <iostream>
// standart giriş-çıkış fonksiyonlarını kullanmak için gerekli.
using namespace std;

// Ana fonksiyonumuz
int main()
{ 
    //Türkçe karakter sorununu ortadan kaldırır.
    setlocale(LC_ALL,"Turkish");
    // Ekrana çıkıt vermek için kullanılır.
    cout << "merhaba kullanici";
    //endl alt satıra indirir \n ile aynı.
    cout<<endl;

    return 0;
}
