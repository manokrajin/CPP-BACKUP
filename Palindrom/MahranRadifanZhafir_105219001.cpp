#include <iostream>
using namespace std;

void palindrom(int i, int j);
int fibonacci(int angka);

string kata;
bool katapalindrom=true;

int main()
{
    cout<<"===================================\n\n";
    cout<<"\tProgram Rekursif\n\n";
    cout<<"===================================\n\n";
    cout<<"masukkan kata: "; cin>>kata;
    int i=kata.size()-1, j=0, angka;
    palindrom(i,j);
    if(katapalindrom==true){
        cout<<kata<<" adalah kata palindrom ";
    }else{
        cout<<kata<<" bukan kata palindrom ";
    }

    cout<<"\n\nmasukkan angka : "; cin>>angka;
    for(i=1;i<=angka;i++){
        cout<<fibonacci(i)<<"\t";
    }

    return 0;
}

void palindrom(int i, int j){
    if(i>=0){
        if(kata[i]!=kata[j]){
            katapalindrom=false;
        }else{
            palindrom(i-1,j+1);
        }
    }
}

int fibonacci(int angka){
    if(angka==0 || angka==1){
        return 0;
    }else if(angka==2){
        return 1;
    }else if(angka>2){
        return (fibonacci(angka-1) + fibonacci(angka-2));
    }
}

