#include <iostream>
using namespace std;

void pengunjungper(int dataPengunjung[][3]);
void pengunjungTipe(int dataPengunjung[][3]);
void totalPengunjung(int dataPengunjung[][3]);
void rata2PengunjungTipe(int dataPengunjung[][3]);
void rata2PengunjungHarian(int dataPengunjung[][3]);
void pengubahMataUang(float dataMataUang[][2]);
void cekMataUang(float dataMataUang[][2]);

string hari[5]={"Senin\t: ","Selasa\t: ","Rabu\t: ","Kamis\t: ","Jumat\t: "}, pengunjungPerpus[3]={"Pelajar\t\t: ","Pengajar\t: ","Staf\t\t: "};

int main()
{
    int x,y;
    cout<<"Nomor 1";
    int pengunjung[5][3] = {{133,23,10},{145,25,14},{127,30,8},{143,27,12},{137,33,11}};
    for(x=0; x<=4; x++){
        for(int y=0; y<=2; y++){
            cout<<pengunjung[x][y]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n1.b)"; pengunjungper(pengunjung);
    cout<<"\n1.c)"; pengunjungTipe(pengunjung);
    cout<<"\n1.d)"; totalPengunjung(pengunjung);
    cout<<"\n1.e)\n"; rata2PengunjungTipe(pengunjung);
    cout<<"\n1.f)"; rata2PengunjungHarian(pengunjung);

    cout<<endl<<"\n2.a) dan 2.b)\n";
    float currency[10][2] = {{9810,9840},{2048,2055},{15865,15895},{17630,17700},{1810,1817},{129.90,130.60},{3430,3450},{3750,3770},{10390,10410},{14130,14160}};
    for(x=0; x<10; x++){
        for(int y=0; y<2; y++){
            cout<<currency[x][y]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n2.c)";
    pengubahMataUang(currency);
    cout<<"\n2.d)";
    cekMataUang(currency);

    cout<<endl<<"\nNomor 3\n";
    int besarMatriks, matriks[20][20], frekuensi, angkaMatriks, totalFrekuensi=0;
    cout<<"Besar Matriks n*n\t: "; cin>>besarMatriks;
    cout<<"Angka yang ingin dicari frekuensinya\t: "; cin>>frekuensi;
    for(x=0; x<besarMatriks; x++){
        angkaMatriks=2+x;
        for(int y=0; y<besarMatriks; y++){
            matriks[x][y]=angkaMatriks;
            cout<<matriks[x][y]<<" ";
            if(matriks[x][y]==frekuensi){
                totalFrekuensi+=1;
            }
            angkaMatriks++;
        }
        cout<<endl;
    }
    cout<<"\nFrekuensi dari angka "<<frekuensi<<" sejumlah\t: "<<totalFrekuensi;

    return 0;
}

void pengunjungper(int dataPengunjung[][3])
{
    int totalPengunjung=0;
    for(int i=0; i<5 /*baris*/ ; i++){
        for(int j=0; j<3 /*kolom*/ ; j++){
            totalPengunjung+=dataPengunjung[i][j];
        }
        cout<<hari[i]<<totalPengunjung<<endl;
        totalPengunjung=0;
    }
}

void pengunjungTipe(int dataPengunjung[][3])
{
    int tipe[3] = {0,0,0}, total=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            tipe[i]+=dataPengunjung[j][i];
        }
        cout<<pengunjungper[i]<<tipe[i]<<endl;
    }
}

void totalPengunjung(int dataPengunjung[][3])
{
    int harian[5] = {0,0,0,0,0}, total=0;
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            harian[i]+=dataPengunjung[i][j];
        }
        total+=harian[i];
    }
    cout<<"\nTotal Pengunjung\t: "<<total;
}

void rata2PengunjungTipe(int dataPengunjung[][3])
{
    int tipe[3] = {0,0,0};
    float rata2[3];
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            tipe[i]+=dataPengunjung[j][i];
        }
        rata2[i]=tipe[i]/5.0;
        cout<<pengunjungper[i]<<rata2[i]<<endl;
    }
}

void rata2PengunjungHarian(int dataPengunjung[][3])
{
    int harian[5] = {0,0,0,0,0};
    float rata2[5];
    for(int i=0; i<5; i++){
        for(int j=0; j<3; j++){
            harian[i]+=dataPengunjung[i][j];
        }
        rata2[i]=harian[i]/3.0;
        cout<<hari[i]<<rata2[i]<<endl;
    }
}

void pengubahMataUang(float dataMataUang[][2])
{
    int pilihanTipe, pilihanMataUangInt;
    float nilaiMataUang;
    string pilihanMataUang;
    cout<<"===========================Pengubah Nilai Mata uang===========================\n";
    cout<<"Tipe transaksi mata uang yang ingin anda ubah (0 untuk beli, 1 untuk jual)\t: "; cin>>pilihanTipe;
    cout<<"Tipe mata uang yang ingin anda pilih\t: "; cin>>pilihanMataUang;
    cout<<"Masukkan harga mata uang untuk diupdate\t: "; cin>>nilaiMataUang;
    if(pilihanMataUang=="AUD") {pilihanMataUangInt=0;}
    else if(pilihanMataUang=="CNY") {pilihanMataUangInt=1;}
    else if(pilihanMataUang=="EUR") {pilihanMataUangInt=2;}
    else if(pilihanMataUang=="GBP") {pilihanMataUangInt=3;}
    else if(pilihanMataUang=="HKD") {pilihanMataUangInt=4;}
    else if(pilihanMataUang=="JPY") {pilihanMataUangInt=5;}
    else if(pilihanMataUang=="MYR") {pilihanMataUangInt=6;}
    else if(pilihanMataUang=="SAR") {pilihanMataUangInt=7;}
    else if(pilihanMataUang=="SGD") {pilihanMataUangInt=8;}
    else if(pilihanMataUang=="USD") {pilihanMataUangInt=9;}
    for(int i=0; i<10; i++){
        for(int j=0; j<2; j++){
            if(i==pilihanMataUangInt && j==pilihanTipe){
                dataMataUang[i][j]=nilaiMataUang;
            }
        }
    }
}

void cekMataUang(float dataMataUang[][2])
{
    int pilihanTipe, pilihanMataUangInt;
    string pilihanMataUang, pilihanTipeString, tipeMataUang[10]={"AUD","CNY","EUR","GBP","HKD","JPY","MYR","SAR","SGD","USD"};
    cout<<"===========================Cek Nilai Mata Uang===========================\n";
    cout<<"Tipe transaksi mata uang yang ingin anda ubah (0 untuk beli, 1 untuk jual)\t: "; cin>>pilihanTipe;
    if(pilihanTipe==0) {pilihanTipeString="Beli";}
    else if(pilihanTipe==1) {pilihanTipeString="Jual";}
    cout<<"Tipe mata uang yang ingin anda pilih\t: "; cin>>pilihanMataUang;
    if(pilihanMataUang=="AUD"){pilihanMataUangInt=0;}
    else if(pilihanMataUang=="CNY") {pilihanMataUangInt=1;}
    else if(pilihanMataUang=="EUR") {pilihanMataUangInt=2;}
    else if(pilihanMataUang=="GBP") {pilihanMataUangInt=3;}
    else if(pilihanMataUang=="HKD") {pilihanMataUangInt=4;}
    else if(pilihanMataUang=="JPY") {pilihanMataUangInt=5;}
    else if(pilihanMataUang=="MYR") {pilihanMataUangInt=6;}
    else if(pilihanMataUang=="SAR") {pilihanMataUangInt=7;}
    else if(pilihanMataUang=="SGD") {pilihanMataUangInt=8;}
    else if(pilihanMataUang=="USD") {pilihanMataUangInt=9;}
    for(int i=0; i<10; i++){
        for(int j=0; j<2; j++){
            if(i==pilihanMataUangInt && j==pilihanTipe){
                cout<<"Nilai terbaru dari transaksi "<<pilihanTipeString<<" dengan mata uang "<<tipeMataUang[i]<<" adalah\t: "<<dataMataUang[i][j];
            }
        }
    }
}

