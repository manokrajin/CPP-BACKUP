#include <iostream>

using namespace std;
void x (string apa);
int main()
{
    string nama;
    cin>> nama;
    x(nama);
    return 0;
}
void x(string apa)
{
    cout<<"hello, "<<apa;
}
