// FONKSIYON ASIRI YUKLENMESI ORNEG�D�R. BAZI DETAYLARA DIKKAT EDILMELI
#include <iostream>

#include <string>
using namespace std;
class diziler{
    char abece;
public:
    diziler(){
    abece='m'; //char tan�mlarken �ift t�rnak degil tek t�rnak isareti kullan�l�r

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
