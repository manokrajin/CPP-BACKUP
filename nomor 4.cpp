#include <iostream>

using namespace std;

int main()
{
    int hari,denda,buku;
    cout << "1- Reference Book" << endl;
    cout << "2- Textbook" << endl;
    cout << "Buku yang anda pinjam adalah: ";
    cin >> buku;
    if(buku == 1)
        {
        cout << "denda 2000 / hari" << endl;
        cout << "berapa hari telat? ";
        cin >> hari;
        denda = hari * 2000;
        cout << "denda anda sebesar: " << denda ;
        }
    if(buku == 2)
        {
        cout << "denda 1000 / hari" << endl;
        cout << "berapa hari telat: ";
        cin >> hari;
        denda = hari * 1000;
        cout << "denda anda sebesar: " << denda ;

        cout << "=======================" << endl << endl;
        }
    return 0;
    }
