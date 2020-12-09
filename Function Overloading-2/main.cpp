// FONKSIYON ASIRI YUKLENMESI ORNEGÝDÝR. BAZI DETAYLARA DIKKAT EDILMELI
#include <iostream>

#include <string>
using namespace std;
class diziler{
    char abece;
public:
    diziler(){
    abece='m'; //char tanýmlarken çift týrnak degil tek týrnak isareti kullanýlýr

    }
    diziler(char harf){
    abece=harf;
    }

    void yaz(){

    cout<<abece <<"     "<<endl;}



};

int main()
{
    int i=0;
    diziler a1[5];
    diziler a2[5]={'e','d','c','b','a'};

    while(i<5){  //i nin en basta belirtilmesi lazim
        a2[i].yaz();
        i++;
    }

    return 0;
}
