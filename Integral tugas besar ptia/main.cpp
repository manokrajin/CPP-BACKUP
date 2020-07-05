#include <iostream>
using namespace std;
int main()
{
   float a,b,fungsi,jumlah,interval,n;
   //proses input data
   cout<<"---------------------------------------------------------\n";
   cout<<"| Program menentukan jumlah riemann pada fungsi X^3+X+1 | \n";
   cout<<"---------------------------------------------------------\n";
   cout<<"\n";
   cout<<"\n";
   cout<<"\t1)masukkan batas awal = "; cin>>a;
   cout<<"\t2)masukkan batas akhir = "; cin>>b;
   cout<<"\t3)masukkan interval delta x = " ;cin>>interval;

    //jumlah pemecahan delta x
    n=(b-a)/interval;

    //proses data
    for (a=a;a<=b;a=a+interval){
            fungsi=((a*a*a)+a+1)*interval;
            jumlah= jumlah + fungsi;
        }
    cout<<"jumlah riemann = "<<jumlah;
    cout<<"\n";
    cout<<"dipecah menjadi = "<<n<<" bagian";
    return 0;
}
