#include <iostream>

using namespace std;
class Isletme{
public:
    int maas;
    //Isletme (){};
    virtual void zam_hesapla()=0;
};
class Mudur:public Isletme{
public:
    Mudur(int y){
    maas=y;

    }
void zam_hesapla(){
    cout<<"Mudurun alacagi zam : "<<maas * 0.2<<endl;
}
};
class Isci:public Isletme{
public:
    Isci(int x){
    maas=x;
    }
    void zam_hesapla(){
    cout<<"Iscinin alacagi maas : "<<maas*0.5<<endl; //Isci daha cok zam aldi cunku onun daha cok zamma ihtiyaci vardir. Canim boyle istedi.
    }

};

int main()
{
    int secim;


   Isletme *ptr;
   Mudur mdr(9000);
   Isci emekci(2223);
   cout<<" Ogrenmek istediginizi gormek icin secim yapiniz . "<<endl;
   cout<<"1 numara : Mudure yapilan zam : "<<endl;
   cout<<"2 numara : Isciye yapilan zam : "<<endl;
   cout<<"------------------------------------"<<endl;
   cin>>secim;

   switch(secim){
   case 1:
    ptr = &mdr;
    ptr->zam_hesapla();
   break;
   case 2:
    ptr = &emekci;
    ptr->zam_hesapla();
    break;
   default: cout<<"Yanlis deger girdiniz "<<endl;
   }


    return 0;
}
