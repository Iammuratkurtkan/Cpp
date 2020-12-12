#include <iostream>
using namespace std;
class A{
protected:
    int x,y;
public:
    A(){};
};
class B:private A{
public:
    B(int sayi1,int sayi2){
    x=sayi1;
    y=sayi2;
    }
    void goruntule();
    void degistir(int a,int b){
    x=a;
    y=b;
    }
};
void B::goruntule(){
cout<<x<<endl;
cout<<y<<endl;
cout<<"-------------------------"<<endl;
}


int main()
{
    B nesne1(1,2),nesne2(3,4);
    nesne1.goruntule();
    nesne2.goruntule();
    nesne1.degistir(10,20);
    nesne1.goruntule();


    return 0;
}
