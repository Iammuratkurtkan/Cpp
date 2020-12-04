#include <iostream>

#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "turkish");
    int a,b,c;
    double disk;
    float x1;
    float x2;


    cout<<"ax^2+bx+c seklinde verilen 2. derece denklemlerin a,b,c gibi degerlerinin sizleri girip cozumunu benim buldugum uygulamaya hosgeldiniz\n"<<endl;
    cout<<"Adim adim ilerleyelim."<<endl;
    cout<<"Adim-1 : Denklemin a,b,c degerlerini belirlemek."<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"Girdiginiz degerler sonucu olusan denklem bu sekildedir :"<<a<<"x^2 +"<<b<<"x+ "<<c<<endl;
    cout<<"Adim-2 : diskriminant degerini bulma."<<endl;
    cout<<"Diskriminant degeri su denklem ile bulunur :  Δ=b^2-4ac "<<endl;
    cout<<"Diskriminant degerini bulalim."<<endl;
    disk=pow(b,2) - 4 * a * c ;
    cout<<"Diskriminant degerini buldunuz : "<<disk<<endl;
    if(disk>0){
        cout<<"Adim-3 kok bulma : "<<endl;
        cout<<"disk > 0 ise birbirinden farkli iki kok vardir."<<endl;
        cout<<"Bu kokler su denklem ile bulunur : (-b + veya - kok icinde disk )/2a "<<endl;
        x1=(-1 * b + sqrt(disk)) / (2 * a);
        x2=(-1 * b - sqrt(disk)) / (2 * a);
        cout<<"Bu islemin sonucunda cikan denklemin kokleri bunlardir : "<<"x1= "<<x1<<"   x2= "<<x2<<endl;

}
   else if(disk==0){
        cout<<"Adim-3 kok bulma : "<<endl;
        cout<<"Denklemin iki esit koku vardir." <<endl;
        cout<<"Bu kökler şu denklem ile bulunur : (-b + veya - kok icinde disk )/2a "<<endl;
        x1=(-1 * b + sqrt(disk)) / (2 * a);
        x2=(-1 * b - sqrt(disk)) / (2 * a);
        cout<<"Bu islemin sonucunda cikan denklemin kokleri bunlardir : "<<"x1= "<<x1<<"  x2= "<<x2<<endl;

   }
   else {
        cout<<"Diskriminant 0 dan kucuktur. "<<endl;
        cout<<"     SANAL KOK YOKTUR      "<<endl;
   }



    return 0;
}
