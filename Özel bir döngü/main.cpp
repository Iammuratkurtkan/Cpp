#include <iostream>

using namespace std;
void ekrana_yaz(int){
    for(int i =10; i<100; i++){
        if(i%9==0 || i%5==0){
            cout<<"5'e ya da 9'a bolunen sayilar : "<<i<<endl;
     }
}
}


int main()
{
    int i;
    cout<<"Iki basamakli sayilardan 5'e ya da  9'a tam bolunen sayilar yazdiran programa Hosgeldiniz ! "<<endl;

    ekrana_yaz(i);
    return 0;
}
