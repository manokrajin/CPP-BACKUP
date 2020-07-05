#include <iostream>

using namespace std;

int main()
{
    int pilihan,matauangasing,rupiah;
    float asing;
    cout << "1. Asing to Rupiah" << endl;
    cout << "2. Rupiah to Asing" << endl;
    cout << "-------------------" << endl;
    cout << "Pilih salah satu kode: ";
    cin >> pilihan;
    cout << "------------------" << endl;

        if(pilihan == 1){
            cout << "1.) aud --> idr" << endl;
            cout << "2.) cny --> idr" << endl;
            cout << "3.) eur --> idr" << endl;
            cout << "4.) gbp --> idr" << endl;
            cout << "5.) hkd --> idr" << endl;
            cout << "6.) jpy --> idr" << endl;
            cout << "7.) myr --> idr" << endl;
            cout << "8.) sar --> idr" << endl;
            cout << "9.) sgd --> idr" << endl;
            cout << "10.) usd --> idr" << endl;

            cout << "=======================" << endl;

            cout << "Pilih mata uang anda: ";
            cin >> matauangasing;
            cout << "masukan nominal uang anda: ";
            cin >> asing;

            cout << "=======================" << endl;

            switch(matauangasing){
                case 1 : cout << "Rp " << asing * 9810.0 << endl; break;
                case 2 : cout << "Rp " << asing * 2048.0 << endl; break;
                case 3 : cout << "Rp" << asing * 15865.0 << endl; break;
                case 4 : cout << "Rp " << asing * 17630.0 << endl; break;
                case 5 : cout << "Rp " << asing * 1810.0 << endl; break;
                case 6 : cout << "Rp " << asing * 129.90 << endl; break;
                case 7 : cout << "Rp " << asing * 3430.0 << endl; break;
                case 8 : cout << "Rp " << asing * 3750.0 << endl; break;
                case 9 : cout << "Rp " << asing * 10390.0 << endl; break;
                case 10 : cout << "Rp " << asing * 14130.0 << endl; break;
                default : cout << "error";
            }
        }
        else{
            cout << "1.) idr --> aud" << endl;
            cout << "2.) idr --> cny" << endl;
            cout << "3.) idr --> eur" << endl;
            cout << "4.) idr --> gbp" << endl;
            cout << "5.) idr --> hkd" << endl;
            cout << "6.) idr --> jpy" << endl;
            cout << "7.) idr --> myr" << endl;
            cout << "8.) idr --> sar" << endl;
            cout << "9.) idr --> sgd" << endl;
            cout << "10.) idr --> usd" << endl;

            cout << "=======================" << endl;

            cout << "Pilih mata uang dituju: ";
            cin >> matauangasing;
            cout << "masukan nominal uang anda: ";
            cin >> rupiah;

            cout << "=======================" << endl;

            switch(matauangasing){
                case 1 : cout << "aud " << rupiah / 9840.0 << endl; break;
                case 2 : cout << "cny " << rupiah / 2055.0 << endl; break;
                case 3 : cout << "eur " << rupiah / 15895.0 << endl; break;
                case 4 : cout << "gbp " << rupiah / 17700.0 << endl; break;
                case 5 : cout << "hkd " << rupiah / 1817.0 << endl; break;
                case 6 : cout << "jpy " << rupiah / 130.60 << endl; break;
                case 7 : cout << "myr " << rupiah / 3450.0 << endl; break;
                case 8 : cout << "sar " << rupiah / 3770.0 << endl; break;
                case 9 : cout << "sgd " << rupiah / 10410.0 << endl; break;
                case 10 : cout << "usd " << rupiah / 14160.0 << endl; break;
                default : cout << "error";
            }
        }
    return 0;
}
