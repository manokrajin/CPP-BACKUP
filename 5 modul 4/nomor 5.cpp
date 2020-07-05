#include <iostream>

using namespace std;

int main()
{
    float nilai,ipk;
    cout << "masukan grade nilai anda: ";
    cin >> nilai;
    if(nilai > 80){
        cout << "Grade A" << endl;
    }
    if((nilai >= 65) && (nilai <= 80)){
        cout << "Grade B" << endl;
    }
    if((nilai >= 45) && (nilai < 65)){
        cout << "Grade C" << endl;
    }
    if((nilai >= 30) && (nilai < 45)){
        cout << "Grade D" << endl;
    }
    if(nilai < 30){
        cout << "Grade E" << endl;
    }

    cout << "=======================" << endl << endl;

    cout << "Masukan nilai IPK anda: ";
    cin >> ipk;
    if(ipk >= 3.8){
        cout << "Summa Cumlaude" << endl;
    }
    if((ipk >= 3.6) && (ipk < 3.8)){
        cout << "Magna Cumlaude" << endl;
    }
    if((ipk >= 3.40) && (ipk < 3.6)){
        cout << "Cumlaude" << endl;
    }
    if(ipk < 3.4){
        cout << "maaf coba lagi" << endl;
    }
    return 0;
}
