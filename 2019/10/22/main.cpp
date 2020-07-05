#include <iostream>

using namespace std;

int main()
{
    int nilai, nilaiawal,i;
    nilaiawal = 0;
    i=0;
    while(i<=9)
        {
        cout<<"masukkan nilai = "; cin>>nilai;
        i=i+1;
        nilai = nilai + nilaiawal;
        nilaiawal = nilai;

        cout<< nilai<<endl;
        }
        return 0;
}
