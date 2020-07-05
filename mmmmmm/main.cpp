#include <iostream>

using namespace std;

int main()
{
    string w;
    cout << "Masukkan sebuah kata:" << endl;
    do
    {
        cin >> w;
        cout << w << endl;
    } while(w != "exit");
}
