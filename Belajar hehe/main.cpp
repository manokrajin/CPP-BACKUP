#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int neff =0 ;
    int indeks = 0;
    int n;
    int b,angka,jumangka=0,jumel=0;
    n=0;
    cin>>b;
    while (neff<100 && b!=-999)
    {
        a[indeks]=b;
        indeks++;
        neff++;
        cin>>b;

    }

    cout<<"total indeks = "<<indeks-1<<endl<<"total nilai efektif array = "<<neff<<endl;
        while(n<indeks)
    {
        jumel=jumel+a[n];
        n++;

    }

    cout<<"jumlah semua elemen = "<<jumel;

    cout<<"cari angka yang diinginkan = ";
    n=0;
    cin>>angka;
    while (n<neff)
    {

        if (a[n]==angka)
        {
            jumangka++;
            n++;
        }
        else
        {
            n++;
        }
    }
    if (jumangka==0)
    {
        jumangka=-1;
    }
    cout<<"jumlah = "<<jumangka;

    return 0;
}
