#include <iostream>

using namespace std;

int main()
{
    float sks,grade, jumlah, jumnil,jumsks,nilai;
    char mnk,poin;
    int a,b,c,d,e;
    jumlah=0;
    jumnil=0;
    jumsks=0;
    a=4;
    b=3;
    c=2;
    d=1;
    e=0;
    cout<<"mulai program y/n? "; cin>>mnk;
    if (mnk !='n')
    {
            while (mnk != 'n')
            {
            cout<<"masukkan grade(dalam huruf)= ";cin>>poin;
            cout<<"masukkan sks= ";cin>>sks;
            nilai=poin*sks;
            jumnil=nilai+jumnil;
            jumsks=sks+jumsks;
            cout<<"mau lagi? (y/n)= ";cin>>mnk;
            }
            cout<<"poin akhir="<<jumnil/(jumsks);
    }
    else
    {
        cout<<"terimakasih:)";
    }


    return 0;
}
