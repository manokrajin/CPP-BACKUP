#include <iostream>

using namespace std;
void cek(int x);

int main()
{
    char pilihan = 'Y';
    int n,angka[100],nilaimaks,i,jumlah;

    cout<<"mau berapa angka = ";
    cin>>jumlah;
    cek(jumlah);

   for(n=0;n=jumlah;n++)
   {
       cin>>angka[n];
       n++;
   }


    return 0;
}
void cek(int x)
{
     int i = 0,angka[x],nilaimaks,n;
     for (n=0;n=x;n++)
     {
         cin>>angka[n];
         n++;
     }
     do
    {
        if(angka[i]<angka[i+1])
        {
            nilaimaks = angka[i+1];
        }
        if(angka[i]>angka[i+1])
        {
            nilaimaks = nilaimaks;
        }
    }while(i!=x+1);
    cout<<nilaimaks;

}


