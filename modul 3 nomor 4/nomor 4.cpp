#include <iostream>

using namespace std;

int main()
{
    float inci;
    float feet;
    float berat;
    float imb;
    float beratkg;
    float tinggim;

    cout<<"masukkan tinggi : (inch) (feet)"<<endl;
    cin>>inci;
    cin>>feet;
    cout<<"masukkan berat : (pound)"<<endl;
    cin>>berat;

    beratkg = berat*0.454;
    tinggim = (inci*0.0254)+(feet*0.305);
    imb = beratkg/(tinggim*tinggim);

    cout<<"indeks = "<<imb;
    return 0;
}
