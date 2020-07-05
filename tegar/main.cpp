#include <iostream>
#include <fstream>
using namespace std;

int main(){
	fstream prog1;

	string judul[50],penerbit[50],kategori[50],baca;
	int i=0,buku,j=0;
	cout<<"input banyak buku = ";
	cin>>buku;

	while(i<buku){
		cout<<"BUKU KE- "<<i+1<<"\n";
			cout<<"masukkan judul buku = ";cin>>judul[i];
			cout<<"penerbit = "; cin>>penerbit[i];
			cout<<"kategori = "; cin>>kategori[i];
		prog1.open("prog1.txt", ios::app |ios:: in);
        prog1>>baca[j];
		prog1<<judul[i]<<endl<<penerbit[i]<<endl<<kategori[i]<<endl;
			i++;j++;
			prog1.close();
	}
	prog1.open("prog1.txt",ios :: in);
	while(!prog1.eof()){
    prog1>>baca;
    cout<<baca<<endl;
	}
	prog1.close();
	/*
    // ifstream prog1;
    // string kota;
    ins.open(“namakota.txt”);
    while (!ins.eof()) {
        ins >> kota;
    cout << kota << endl;}
            ins.close();*/
	return 0;
}
