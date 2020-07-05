#include <iostream>

using namespace std;

int main ()
{
    float tc,tf,tk,tr;
    int f,k,r,kode;
    f=1;
    k=2;
    r=3;

    cout<< "masukkan suhu dalam celcius = ";
    cin>> tc;
    cout<< "mau diubah ke = "<<endl<<"f = fahrenheit"<<endl<<"k = kelvin"<<endl<<"r = reamur"<<endl;
    cin >> kode;

    if (kode=1)
    {
        tf=(1.8*tc)+32;
        cout<<"suhu = "<<tf;
    }
    else if  (kode = 2)
    {
        tk=tc+273;
        cout<<"suhu = "<<tk;
    }
}

