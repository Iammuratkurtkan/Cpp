#include <iostream>

using namespace std;
class mat_sinavi{
string ad,soyad;
int vize_not,final_not;
public:
    mat_sinavi(string a , string b , int c , int d){
    ad=a;
    soyad=b;
    vize_not=c;
    final_not=d;
    }
    void goster(){
    cout<<"  ad : "<<ad<<"  soyad : "<<soyad<<"  vize sonuc : "<<vize_not<<"  final sonucu : "<<endl;
    cout<<"-----------------------------------------------------------------------------"<<endl;}
};
//void bilgi_gir þeklinde de kolayca yapýlabilir
int main()
{
   mat_sinavi bilgi[10]={mat_sinavi("Murat ","Kurtkan ",60,100),mat_sinavi("Ahmet","Tapsik",55,95),
   mat_sinavi("Emre","Ozgel",60,85),mat_sinavi("Efe","Gezer",35,79),
   mat_sinavi("Faruk","Demirel",50,70) ,mat_sinavi("Betul","Ozgun",40,60),
   mat_sinavi("Altug","ishak",20,47),mat_sinavi("Yesim","Kaya",10,90),
   mat_sinavi("Ali","Kaya",80,40),mat_sinavi("Enes","Sen",70,60)};
   for ( int i =0 ; i<10;i++){
    bilgi[i].goster();
   }


    return 0;
}
