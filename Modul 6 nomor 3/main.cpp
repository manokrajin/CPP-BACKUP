#include <iostream>

using namespace std;
int celcius_ke_fahrenheit(int x);
string show_conversions();
int main()
{
    int i;
    char pil;
    for (i=-50;i<=50;i=i+5)
    {
        cout<<i<<"C= "<<celcius_ke_fahrenheit(i)<<"F\n";
    }
    cout<<"mau lihat data lengkap?(y/n)"; cin>>pil;
    if (pil=='y')
    {
        cout<<show_conversions();
    }

    return 0;
}

int celcius_ke_fahrenheit(int x)
{
    x=(9.0/5.0*x)+32;
    return x;
}

string show_conversions()
{
    cout<<"suhu terendah = "<<celcius_ke_fahrenheit(-50)<<endl;
    cout<<"suhu tertinggi = "<<celcius_ke_fahrenheit(50<<endl;
    cout<<"kenaikan = 5";
}
