#include <iostream>
using namespace std;

class personeller{
string ad;
int yas;

public:
    void atama_yap(string );
    void atama_yap(int);
    void goruntule();


};
void personeller::atama_yap(int sayi){
yas=sayi;
}
void personeller::atama_yap(string b){
ad=b;
}
void personeller::goruntule(){
cout<<"adı : "<<ad<<endl;
cout<<"yasi : "<<yas<<endl;
}




int main()
{
    personeller pers1,pers2;
    pers1.atama_yap("murat");
    pers1.atama_yap(19);

    pers2=pers1;

    pers1.goruntule();
    pers2.goruntule();


    return 0;
}
