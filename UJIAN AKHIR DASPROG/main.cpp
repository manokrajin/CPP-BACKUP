// Nomor 2
#include <iostream>

using namespace std;

int main() {
  int jumlah, merah, putih, biru, x;
  string data;
  jumlah = 0;
  merah = 0;
  biru = 0;
  putih = 0;
  do {
    cout << "masukkan warna yang anda inginkan = ";
    cin >> data;
    //0,1, dan 2 yang mewakili warna merah, putih dan biru.
    if (data == "merah") {
      jumlah++;
      merah++;
    }
    if (data == "putih") {
      jumlah++;
      putih++;
    }
    if (data == "biru") {
      jumlah++;
      biru++;
    }
    if (data == "stop") {
      cout << "data selesai." << endl;
    }
  } while (data != "stop");

  for (x = 0; x <= jumlah; x++){
    if (x < merah) {
      cout << "0,";
    }
  if (x <= putih + merah && x > merah) {
    cout << "1,";
  }
  if (x <= jumlah && x > merah + putih) {
    if (x == jumlah) {
      cout << "2";
    } else {
      cout << "2,";
    }
  }
  }

  return 0;
}
