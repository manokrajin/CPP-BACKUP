#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int rupiah,pound,cent,pound50,pound20,pound10,pound5,pound2,pound1,pence50,pence20,pence10,pence5,pence2,penny;
    float pounds;
    cout<<"masukkan uang yang akan ditukar"<<endl;
    cin>>rupiah;
    pounds = rupiah/18000.0;
    pound = pounds;
    cent = round((pounds-pound)*100);
    cout<<"uang anda "<<pounds<<" poundsterling"<<endl;

        //uang besar
        pound50=pound/50;
        pound20=(pound%50)/20;
        pound10=((pound%50)%20)/10;
        pound5=(((pound%50)%20)%10)/5;
        pound2=((((pound%50)%20)%10)%5)/2;
        pound1=(((((pound%50)%20)%10)%5)%2);


        pence50=cent/50;
        pence20=(cent%50)/20;
        pence10=((cent%50)%20)/10;
        pence5=(((cent%50)%20)%10)/5;
        pence2=((((cent%50)%20)%10)%5)/2;
        penny=(((((cent%50)%20)%10)%5)%2);


    cout<<"uang yang diterima"<<endl;
    cout<<pound50<< " 50 pounds"<<endl;
    cout<<pound20<< " 20 pounds"<<endl;
    cout<<pound10<< " 10 pounds"<<endl;
    cout<<pound5<< " 5 pounds"<<endl;
    cout<<pound2<< " 2 pounds"<<endl;
    cout<<pound1<< " 1 pound"<<endl;
    cout<<pence50<< " 50 pence"<<endl;
    cout<<pence20<< " 20 pence"<<endl;
    cout<<pence10<< " 10 pence"<<endl;
    cout<<pence5<< " 5 pence"<<endl;
    cout<<pence2<< " 2 pence"<<endl;
    cout<<penny<< " 1 penny"<<endl;

    return 0;
}
