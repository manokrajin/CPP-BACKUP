#include <iostream>

using namespace std;

int main()
{
    float poin,bobot,grade, jumlah;
    char mnk;
    jumlah=0;
    cout<<"mulai program y/n? "; cin>>mnk;
    while (mnk != 'n')
    {
        cout<<"masukkan nilai= ";cin>>poin;
        cout<<"masukkan bobot= ";cin>>bobot;
        jumlah=jumlah+poin;
        grade=jumlah*(bobot/100);
        cout<<"mau lagi? (y/n)= ";cin>>mnk;
    }
    cout<<"poin akhir="<<grade;



    return 0;
}
