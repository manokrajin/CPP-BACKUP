#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char nomor[12];
    string nama[3];
    string provider;
    int p,q,r,admin[3], i=0;
    int a=0,b=0;
    int topup[3],total[3];
    while(i<3)
    {
        cout<<"masukkan nama anda ";
        cin>>nama[a];
        a++;
        cout<<"masukkan nomor anda(tekan enter tiap digit nomor = ";
        for (b=0;b=11;b++)
        {
            cin>>nomor[b];
        }
            if (nomor[0]==0&&nomor[1]==8&&nomor[2]==7&&nomor[3]==8)
            {
                provider="XL";
            }
            if (nomor[0]==0&&nomor[1]==8&&nomor[2]==2&&nomor[3]==3)
            {
                provider="Telkomsel";
            }
            if (nomor[0]==0&&nomor[1]==8&&nomor[2]==5&&nomor[3]==7)
            {
                provider="Indosat";
            }
            if (nomor[0]==0&&nomor[1]==8&&nomor[2]==9&&nomor[3]==6)
            {
                provider="Tri";
            }
        cout<<"masukkan nominal top up = ";
        cin>>topup[a];
        cout<<"biaya admin = ";
        cin>>admin[a];
        cout<<"harga total = ";
        total[a]=topup[a]+admin[a];
    a++;


    }

    ofstream info;
    info.open("info.txt");
    info<<"nama \t\t\t nomor \t\t\t topup \t\t\t admin \t\t\t total"<<endl;
    while (p<3)
    {
        info<<nama[p]<<"\t\t"<<nomor[p]<<"\t\t"<<admin[p]<<"\t\t"<<total[p];
    }
    info.close();



    return 0;
}
