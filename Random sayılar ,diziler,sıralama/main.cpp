#include <iostream>
#include <iomanip>
#include<cstdlib>
using namespace std;

int main()
{
    int sayilar[10];
    int i,j;
    srand(time(NULL));
    for(i=i;i<11;i++){
        sayilar[i]=rand()%100+1;
        cout<<i<<". eleman : "<<sayilar[i]<<endl;

    }
    cout<<"-------------------------------------"<<endl;
     for(i=1;i<11;i++){
        for(j=1;j<11;j++){
            if(sayilar[i]>sayilar[j]){
                int kutu=sayilar[i];
                sayilar[i]=sayilar[j];
                sayilar[j]=kutu;
            }

        }

     }
     for(i=1;i<11;i++){
        cout<<i<<". Eleman "<<sayilar[i]<<endl;

     }

    return 0;
}
