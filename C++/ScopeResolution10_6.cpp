#include <iostream>

using namespace std;
int x=10,y=5;
int fonk(int);

int main()
{
//Scope Resolution

//:: operatoru yardımı ile fonksiyonlar arasında değer taşımak
cout<<fonk(1);


}

int fonk(int y)
{
    return ::x*(y+::y);

}
