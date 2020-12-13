#include <iostream>

using namespace std;

class ogrenci{
protected:
    string ad,soyad;
    void goster(){

    cout<<ad<<"      "<<soyad<<endl;

    }
public:
    ogrenci(string a,string s){
    ad=a;
    soyad=s;

    }


};

class sinav : public ogrenci{
int puan;
public:
    sinav(string a,string s,int p):ogrenci(a,s){
    puan=p;
    }
    void goster2(){
    goster();
    cout<<puan<<endl;
    }


};
int main()
{
    sinav ogr[3]={sinav("Murat","kurtkan",36),sinav("burak","kurtkan",69),sinav("Ahmet","tapsik",89)};
    for(int i =0;i<3;i++){
        ogr[i].goster2();

    }

    return 0;
}
