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

    cout<<width/2<<endl; //integer bagi integer menghasilkan nilai integer,bila hasilnya berkoma maka akan diabaikan
    cout<<width/2.0<<endl; //integer bagi float menghasilkan nilai float
    cout<<height/3<<endl; //float bagi integer hasilnya adalah float
    cout<<int(height)/3<<endl; //mengakses nilai integer dari height
    cout<<float(height/3)<<endl;//mengakses nilai float dari nilai float
    cout<<1+2*5<<endl;
    cout<<delimiter * 5<<endl;//untuk tiga kebawah menggunakan nilai desimal dari sebuah char menggunakan ASCII
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
    int langkah;
    cout<<"input posisi awal = ";cin>>korawal;
    cout<<"input posisi akhir = ";cin>>korakhir;

    if(korawal==korakhir)
    {
        langkah=0;
    }
    if(korawal[0]==korakhir[0]||korawal[1]==korakhir[1])
    {
        langkah=1;
    }
    else
    {
        langkah=2;
    }
    cout<<"Jumlah langkah = "<<langkah;

}
