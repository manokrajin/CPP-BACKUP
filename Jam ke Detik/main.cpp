#include <iostream>

using namespace std;

int main()
{
    int jam;
    int menit;
    int detik;
    int waktu;
    cout <<"masukkan detik"<< endl;
    cin >> waktu;
    jam = waktu/3600;
    menit = (waktu%3600)/60; //operasi mod di c++ pake simbol persen
    detik = (waktu%3600)%60;
    cout << jam<<"jam"<<menit<<"menit"<< detik << "detik";
    return 0;
}

