#include <iostream>

using namespace std;

void gosterici(double*);
void basvurucu(double &);

int main()
{
   double x = 1 ;

   gosterici(&x);
   cout<<"Gosterici ile cagirma x : "<<x<<endl;
   basvurucu(x);
   cout<<"Basvuru ile cagirma x : "<<x<<endl;

    return 0;
}
void gosterici(double *a){
cout<<"gosterici ile cagirma : "<<endl;
*a=5;
}
void basvurucu(double &b){
cout<<"basvurucu ile cagýrma : "<<endl;
b=10;
}

