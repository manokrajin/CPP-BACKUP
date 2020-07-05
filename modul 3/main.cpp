#include <iostream>

using namespace std;

int main()
{
    float thr;
    float gaji;
    float bulan;

    cout<<"berapa gaji dasar?"<<endl;
    cin>>gaji;
    cout<<"berapa bulan udah kerja?"<<endl;
    cin>>bulan;

    thr = (bulan/12)*gaji ;
    cout<<"uang thr mu "<< thr;
    return 0;
}
