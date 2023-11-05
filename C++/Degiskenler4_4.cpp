#include <iostream>
#include <climits>
using namespace std;

//Değişken Aralıkları Veren Kod 
int main()
{   //işaretli en buyuk ve en kucuk eklenir.
    cout<<"integer degerleri:"<<INT_MIN<<" "<<INT_MAX<<endl;
    //işaretsiz en buyuk en kucuk eklenir.
    cout<<"integer degerleri isaretsiz:"<<"0"<<" "<<UINT_MAX<<endl;
    
    //bellekte kapladıdğı alan
    cout<<"bellek int:"<<sizeof(int)<<" byte"<<endl;

    //Global ve local değişkenler : Global pprogramın herhangi bir yerinde çaışabilirken,
    //Local değişken sadece tanımlandığı {} arasında kulanılabilir.

}
