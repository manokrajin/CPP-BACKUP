#include <iostream>

using namespace std;

int main()
{
    int jumlah=0,i=0,namades;
    string nama;
    cout<<"Masukkan string nama = ";
    cin>>nama;
    while(nama[i] != NULL)
    {
        jumlah++;
        i++;
    }
    for(i=0;i<=jumlah-1;i++)
    {
        namades=(int)nama[i];
        cout<<namades;
    }
    return 0;

}

/*void nomor2()
{
    cout<<"masukkan angka = ";
    cin>>angka;
    while(angka[i]!=NULL)
    {
        jumlah++;
        i++;
    }
    for(i=0;i<=jumlah;i++)
    {
        if((jumlah+1)%3==0)
        {
            digit[n]=
        }
    }
}


