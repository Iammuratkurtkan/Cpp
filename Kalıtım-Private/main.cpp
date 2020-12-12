#include <iostream>

using namespace std;
class dortgen{
public:
    int kenar1,kenar2;
    dortgen(){};
    void alan(){
    cout<<"Dikdortgen alani "<<kenar1*kenar2<<endl;
    }
};
class kare:private dortgen{
public:
    kare(int x){
    kenar1=x;
    kenar2=x;
    }
    void alancagir(){
    alan();
    }
};
int main()
{
    kare nesne(4);
    nesne.alancagir();

    return 0;
}
