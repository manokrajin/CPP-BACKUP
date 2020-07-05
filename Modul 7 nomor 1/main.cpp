#include <iostream>

using namespace std;

int main()
{

    string nama,namaawal,namaakhir;
    int i=0;
    cout<<"masukkan nama = ";cin>>nama;
    namaawal = nama[0];
    namaakhir = nama[nama.size()-1];
    cout<<"karakter awal = "<<namaawal<<endl;
    cout<<"karakter akhir = "<<namaakhir;

    return 0;
}
