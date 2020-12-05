#include <iostream>

using namespace std;
class ev{
string bulundugu_il;
int nosu,kati,kira_ucreti;

public:
void atama_yap(string);
void atama_yap(int , int , int);


void goruntule();





};
void ev::atama_yap(string il){
bulundugu_il=il;
}
void ev::atama_yap(int a, int b, int c){
nosu=a;
kati=b;
kira_ucreti=c;
}

void ev::goruntule(){
cout<<"Ev ile ilgili bilgiler-> Bulundugu il "<<bulundugu_il<<"No'su : "<<nosu<<"Kati : "<<kati<<"Kira ucreti : "<<kira_ucreti<<endl;


}
int main()
{
    int x;

    ev evler1,evler2;
    evler1.atama_yap("Istanbul Bayrampasa");
    evler1.atama_yap(35 , 3, 1500);

    evler2.atama_yap("Tekirdag Hayrabolu");
    evler2.atama_yap(59,4,650);

    evler1.goruntule();


    cout<<"Evi begendiniz mi ? \n Eger begendiysenin 10 uzerinden puanlayiniz . "<<endl;
    cin>>x;

    if(x>=5){
        cout<<"Sizin ilginize gore sunabilecegim en iyi ev budur ."<<endl;

    }
    else{
        cout<<"Su ev dikkatinizi cekebilir ; "<<endl;
        evler2.goruntule();
    }



    return 0;
}
