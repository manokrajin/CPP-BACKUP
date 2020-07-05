#include <iostream>

using namespace std;
void nomor1();
void nomor2();
void nomor3();
void nomor4();

int main()
{
    cout<<"Nomor 1\n=======\n"; nomor1();
    cout<<"\nNomor 2\n=======\n"; nomor2();
    cout<<"\nNomor 3\n=======\n"; nomor3();
    cout<<"\nNomor 4\n=======\n"; nomor4();

    return 0;
}

void nomor1()
{
    int width = 17;
    float height = 12.0;
    char delimiter = '.';

    cout<<width/2<<endl;
    cout<<width/2.0<<endl;
    cout<<height/3<<endl;
    cout<<int(height)/3<<endl;
    cout<<float(height/3)<<endl;
    cout<<1+2*5<<endl;
    cout<<delimiter * 5<<endl;
    cout<<delimiter + 5<<endl;
    cout<<delimiter + '5'<<endl;
}

void nomor2()
{
    int r =5;
    float pi = 3.14;
    cout<<"Volume bola adalah = "<<4.0/3*pi*r*r*r;
}

void nomor3()
{
    float hargaawal = 24.95,hargadiskon,potongandiskon,biaya,hargatotal;
    int n,j=2;
    cout<<"harga awal = "<<hargaawal<<endl;
    potongandiskon=40.0/100*hargaawal;
    cout<<"Potongan harga = "<<potongandiskon<<endl;
    hargadiskon=hargaawal-potongandiskon;
    cout<<"Harga per buku = "<<hargadiskon;
    cout<<endl;
    cout<<"Mau ngirim berapa buku? ";cin>>n;

    if (n==1)
    {
        biaya=3;
    }
    if (n>1)
    {
        biaya=3+((n-1)*0.75);
    }

    hargatotal=(hargadiskon*n)+biaya;
    cout<<"Harga total = "<<hargatotal;
}

void nomor4()
{
    string korawal,korakhir;
    int jumlangkah,korawaldes,korakhirdes;
    cout<<"input posisi awal = ";cin>>korawal;
    cout<<"input posisi akhir = ";cin>>korakhir;


    /*if(korawal[0]=='a'||korawal[0]=='b'||korawal[0]=='c'||korawal[0]=='d'||korawal[0]=='e'||korawal[0]=='f'||korawal[0]=='g'||korawal[0]=='h')
    {
        korawal[0]=(int)korawal[0]-32;
    }*/
    korawaldes=(int)korawal[0]+(int)korawal[1];

    /*if(korakhir[0]=='a'||korakhir[0]=='b'||korakhir[0]=='c'||korakhir[0]=='d'||korakhir[0]=='e'||korakhir[0]=='f'||korakhir[0]=='g'||korakhir[0]=='h')
    {
        korakhir[0]=(int)korakhir[0]-32;
    }*/
    korakhirdes=(int)korakhir[0]+(int)korakhir[1];

    jumlangkah=korakhirdes-korawaldes;
    cout<<"JUMLAH LANGKAH = "<<jumlangkah;
}
