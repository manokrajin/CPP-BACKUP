#include <iostream>

using namespace std;

int main()
{
    int gpa,b,maksimum,minimum,modus,c;
    int i, a[i];
    string pil;
    cout<<"masukkan indeks prestasi = "; cin>>gpa;
    a[0]=gpa;
    i=0;
    cout<<"lagi/finish? ";cin>>pil;
    while (pil!="finish")
    {
        cout<<"masukkan indeks prestasi = ";cin>>gpa;
        a[i++]=gpa;
    }
  //maksimum
    maksimum=a[0];
    for (b=0;b<=i;b++)
    {
        if (a[b]>maksimum)
        {
            maksimum=a[b];
        }
    }
    //minimum
    minimum=a[0];
    for (b=0;b<=i;b++)
    {
        if(a[b]<minimum)
        {
            minimum=a[b];
        }
    }
    //modus
  for(b=0;b<=i;b++)
    {
        a[b];
        modus=1;
        for (c=1;c<=i;c++)
            if(a[b]==a[c])
        {
            modus++;
        }
        cout<<"jumlah data "<<a[b]<<" adalah "<<modus;
    }
    return 0;
}

