#include <iostream>

using namespace std;
class dortgen{
public:
    int kenar1,kenar2;
    dortgen(){};
    virtual void alan(){
    cout<<"Dortgen alani : "<<kenar1*kenar2<<endl;
    }
    };
class kare: public dortgen{
public:
    kare(int x){
    kenar1=x;
    }
    void alan(){
    cout<<"Karenin alani : "<<kenar1*kenar1<<endl;
     }

};
class dikdortgen:public dortgen{
public:
    dikdortgen(int y,int z){
    kenar1=y;
    kenar2=z;
    }
    void alan(){
    cout<<"Dikdortgen alani : "<< kenar1*kenar2<<endl;

    }

};
int main()
{
    kare sekil1(6);
    dikdortgen sekil2(5,9);

    dortgen *p;
    p= &sekil1;
    p->alan();
    p =&sekil2;
    p->alan();


    return 0;
}
