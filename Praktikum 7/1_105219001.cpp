#include <iostream>

using namespace std;

int main()
{
    int A[10],B[10],C[10],D[10];
    int i = 0,angka;
    string huruf;
    int id;
    cout<<"masukkan id anda = ";cin>>id;
    cout<<"masukkan seat yang anda inginkan (A,B,C,D) = ";cin>>huruf;
    cout<<"masukkan nomor seat (1-10) = ";cin>>angka;

    if(huruf=="A"){
        while(i < angka){
            i++;
        }
        A[i]=id;
    }
    if(huruf=="B"){
        while(i < angka){
            i++;
        }
        B[i]=id;
    }
    if(huruf=="C"){
        while(i < angka){
            i++;
        }
        C[i]=id;

    }
    if(huruf=="D"){
        while(i < angka){
            i++;
        }
        D[i]=id;
    }
    cout<<"bangku yang terisi = "<<B[4];
    for(i=0;i<9;i++)
    {
        if (A[i]>=0){
        cout<<"bangku kosong = A"<<A[i]<<endl;
        }
    }
     for(i=0;i<9;i++)
    {
        if (B[i]>=0){
        cout<<"bangku kosong = B"<<B[i]<<endl;
        }
    }
     for(i=0;i<9;i++)
    {
        if (C[i]>=0){
        cout<<"bangku kosong = C"<<C[i]<<endl;
        }
    }
     for(i=0;i<9;i++)
    {
        if (D[i]>=0){
        cout<<"bangku kosong = D"<<D[i]<<endl;
        }
    }
    return 0;
}
