#include <iostream>

using namespace std;
class dizgi{
string a,b,c;
public:
    dizgi(){};
    dizgi(string x,string y);
    void operator()(dizgi);
    string al();
};

dizgi::dizgi(string x,string y){

a=x;
b=y;
}
void dizgi::operator() (dizgi d)
{
    c=d.a + d.b;
}
string dizgi::al(){
return c;

}
int main()
{
    dizgi cumle1;
    dizgi cumle2("Murat"," Kurtkan");
    cumle1(cumle2);
    cout<<cumle1.al()<<endl;

    return 0;
}
