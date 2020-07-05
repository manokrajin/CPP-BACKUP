#include <iostream>
using namespace std;
void carinomor(string hasil, string input, int neff, int i);
int main()
{
    string hasil,input;
    int pjgkata;
    cout<<"masukkan keypad anda = "; cin>>input;
    pjgkata=input.length();
    carinomor(hasil,input,pjgkata,0);
    return 0;
}
void carinomor(string hasil, string input, int neff, int i)
{
    int x;
    string kamus[10][4] = {{"","","",""},{"","","",""},{"a","b","c",""}, {"d","e","f",""},
                                            {"g","h","i",""},{"j","k","l",""},{"m","n","o",""},
                                            {"p","q","r","s"},{"t","u","v",""},{"w","x","y","z"}};
    //ubah string ke integer
    int nomor = input[i] - 48; //kurang 48 untuk nyari integernya
    if (i == neff) {   //pencarian kombinasi
      cout << hasil << " , ";
    } else {
      for (x = 0; x < 4; x++) {
        if (kamus[nomor][x] != ""){
        carinomor(hasil + kamus[nomor][x], input, neff, i + 1);
        }
      }
    }
}

