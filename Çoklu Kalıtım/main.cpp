#include <iostream>

using namespace std;
class Altin{
public:
    int ayar;
    int kullanilmamiktari;
public:
    void neKadarKullanildim(){
    cout<<kullanilmamiktari<<endl;
    }
};
class demir{
public:
    int kullanilmamiktari;
public:
    void neKadarKullanildim(){

    cout<<kullanilmamiktari<<endl;
    }

};


class motor:public Altin,public demir{ //Temel yapici fonksiyonlari esliyorum.

public:
    int devir_sayisi;
    int kullanilanAltin;
    int kullanilanDemir;


};

int main()
{
    motor m1;
    m1.devir_sayisi=3200;
    m1.kullanilanAltin=5;
    m1.kullanilanDemir=2000;
    m1.Altin::kullanilmamiktari = m1.kullanilanAltin; //Kritik atamalar burada yapildi
    m1.demir::kullanilmamiktari = m1.kullanilanDemir;

    m1.Altin::neKadarKullanildim(); // Buyuk Kucuk harf hassasiyeti var
    m1.demir::neKadarKullanildim();//Iki tane cift nokta Demirin icindeki seyi temsil eder

    return 0;
}
