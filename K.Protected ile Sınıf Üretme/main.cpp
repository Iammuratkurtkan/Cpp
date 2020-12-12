#include <iostream>

using namespace std;

class Calisan{
protected:
    string ad,soyad;
public:
    calisan(){};
    void isim(string a, string s){
    ad =a ;
    soyad =s;
    }
};
class Muhendis:protected Calisan{
int maas;
public:
    Muhendis(){};
    void Muhendis_maas(int m){
    maas=m;
    }
    void erisim(string a,string b){
    isim(a,b);
    }
    friend void listele(Muhendis &);

};
void listele(Muhendis &x){
cout<<"AD : "<<x.ad<<endl;
cout<<"SOYAD : "<<x.soyad<<endl;
cout<<"MAAS : "<<x.maas<<endl;
cout<<"++++++++++++++++++++++++++++++++++++++"<<endl;


}


int main()
{
    Muhendis kisi[3];
    kisi[0].erisim("Murat","Kurtkan");
    kisi[1].erisim("Burak","Kurtkan");
    kisi[2].erisim("Ahmet","Tapsik" );
    kisi[0].Muhendis_maas(15000);
    kisi[1].Muhendis_maas(30000);
    kisi[2].Muhendis_maas(15000);

    for(int i =0;i<3;i++){
        listele(kisi[i]);
    }


    return 0;
}
