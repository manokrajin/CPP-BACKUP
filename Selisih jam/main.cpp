#include <iostream>

using namespace std;

int main()
{
    int jam1, jam2, menit1,menit2, detik1, detik2,waktu, harga, hargaperdetik, waktuakhir , waktuawal;
    cout << "jam awal?" << endl;
    cin >> jam1;
    cout << "jam akhir?" << endl;
    cin >> jam2;
    cout << "menit awal?" << endl;
    cin >> menit1;
    cout << "menit akhir" << endl;
    cin >> menit2;
    cout << "detik awal" << endl;
    cin >> detik1;
    cout << "detik akhir" << endl;
    cin >> detik2;
    waktuakhir = ((jam2)*3600)+((jam2%3600)*60)+ ((jam2%3600)%60);
    waktuawal = ((jam1)*3600)+((jam1%3600)*60)+ ((jam1%3600)%60);
    waktu = waktuakhir - waktuawal;
    hargaperdetik = 5;
    harga = waktu * hargaperdetik;
    cout << harga << " rupiah";
    return 0;
}
