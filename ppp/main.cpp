#include <iostream>

using namespace std;

int main()
{
    int a, b, c, I,II,III,IV,V,VI;
    cout << "Masukkan tiga angka:";
    cin >> a; cin >> b; cin >> c;
     I = a*b;
     II = b*c;
     III = I*b;
     IV = II*b;
     V = a*c;
     VI = III*II;
    cout << "TURANSUFORUMU! ";
    cout << I << II << III << IV << V << VI;
return 0;
}

