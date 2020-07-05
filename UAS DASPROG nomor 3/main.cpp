#include <iostream>

using namespace std;

int main()
{
    int unsorted[7]={2,0,1,2,1,1,0};
    int sorted[7]={0,0,1,1,1,2,2};
    int x,y,awalarr1,awalarr2,akhirarr1,akhirarr2,angka;
awalarr1 = -1;
awalarr2 = -1;
akhirarr1 = -1;
akhirarr2 = -1;

cout << "Masukkan angka yang ingin ditemukan dalam larik = ";
cin >> angka;

for (x = 0; x < 7; x++) {
  if (unsorted[x] == angka) {
    if (awalarr1 == -1) {
      awalarr1 = x;
    }
    akhirarr1 = x;
  }
}

for (y = 0; y < 7; y++) {
  if (sorted[y] == angka) {
    if (awalarr2 == -1) {
      awalarr2 = y;
    }
    akhirarr2 = y;
  }
}
cout << "unsorted [" << awalarr1 << " , " << akhirarr1 << "]" << endl;
cout << "sorted [" << awalarr2 << " , " << akhirarr2 << "]" << endl;

return 0;
}
