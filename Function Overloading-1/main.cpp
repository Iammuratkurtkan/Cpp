#include <iostream>

using namespace std;

class yapici_fonk{
    string ad1,ad2,soyad1,soyad2;
public:
    yapici_fonk(string a="Murat",string b="Ahmet",string c="Kurtkan",string d="Tapsik"){
    ad1=a;
    ad2=b;
    soyad1=c;
    soyad2=d;
    goruntule();
    }
    void goruntule(){
    cout<<" AD : "<< ad1<<" Soyad : "<<soyad1<<" 2. AD : "<<ad2<<" 2. Soyad : "<<soyad2<<endl;

    }
};

int main()
{
    //Bu örnekte fonksiyon aþýrý yüklenmesi kullanýlmýþtýr. Argüman ve yapýcý fonksiyon ile harmanlanmýþtýr.
    yapici_fonk();
    yapici_fonk("Polat");
    yapici_fonk("Polat","Elif");
    yapici_fonk("Polat","Elif","Alemdar");
    yapici_fonk("Polat","Elif","Alemdar","Eylul");


    return 0;
}
