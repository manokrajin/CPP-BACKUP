#include <iostream>

using namespace std;

int main()
{
    float Suhu; //variabel input
    float fahrenheit; // variabel akhir
    cout << "Masukkan Suhu yang diinginkan" << endl;
    cin >> Suhu;
    fahrenheit = 1.8*Suhu+32; //kalo pecahan harus buat pake float (ex : 9.0) supaya datanya ada koma. kalo ga nanti dia pake operasi div
    cout << fahrenheit;

    return 0;
}
