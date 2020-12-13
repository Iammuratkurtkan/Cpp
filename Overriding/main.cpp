#include <iostream>

using namespace std;
class kitap{
public:
    string isim;
public:
    void bilgilerisoyle(){
    cout<<isim<<endl;
    }


};
class roman:public kitap{
public:
    string romantipi;//kisa, orta , uzun
public:
    roman(string isim,string romantipi){
    this -> isim=isim;  //miras aldiði yere gider
    this -> romantipi=romantipi;
    }
    void bilgilerisoyle(){
    cout<<"Roman ismi : "<<isim<<" Roman Tipi "<<romantipi<<endl;

    }
};
int main()
{

    roman r1("Calikusu "," Uzun ");

    r1.bilgilerisoyle();
    kitap *r1ebeveyn;
    r1ebeveyn=&r1;
    r1ebeveyn->bilgilerisoyle();  //Pointer kismi bu sekilde cagirilir.
  // Bir ustteki fonksiyon cagirmak icin kullandýk.


    return 0;
}
