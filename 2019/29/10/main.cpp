#include <iostream>

using namespace std;

int main()
{
    int i;
    float rata2, jumlah,num;
    cout<<"masukkan angka yang mau dihitung"<<endl;
    cin>>jumlah;
    i=0;

    if (jumlah!=-999)
    {
        while (num!=-999)
            {
                cout<<"masukkan angka yang mau dihitung"<<endl;
                cin>>num;
                jumlah = jumlah+num;
                i= i+1;
            }
        jumlah = jumlah+999;                 rata2= jumlah/i;
        cout<<"jumlah = "<<jumlah<<endl;
        cout<<"banyak bilangan = "<<i<<endl;
        cout<<"rata-rata = "<<rata2;
    }

    else
    {
        cout<<"tidak ada data yang diperoleh";
    }

    return 0;

}
