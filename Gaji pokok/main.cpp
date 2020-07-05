/*#include <iostream>
using namespace std;

int main ()
{
    float gaji;
    float tk;
    float pajak;
    float gaji_total;
    float tunjangan;
    float potongan;
    cout <<"Masukkan gaji"<< endl;
    cin>> gaji;
    tunjangan= gaji*0.2;
    gaji_total = gaji+tunjangan;
    potongan = gaji_total*0.05;
    gaji_total = gaji_total - potongan;
    cout<<gaji_total;
    return 0;

}
*/

#include <iostream>
using namespace std;

int main ()
{
    float gaji_pokok;
    float gaji;
    float gaji_bersih;
    float jam;
    cout << "masukkan gaji"<< endl;
    cin >> gaji;
    cout << "masukkan jam kerja"<< endl;
    cin >> jam;
    gaji_pokok = gaji*jam;
    gaji_bersih = gaji_pokok*0.95;
    cout << gaji_bersih;
    return 0;

}
