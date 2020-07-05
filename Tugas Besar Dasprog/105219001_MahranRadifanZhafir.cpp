#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void krs();
void kuliah();
void hapus();
void bacafile();
float peubahnilai(string test);
void infomahasiswa(string matkulcek, string indekscek);
void infomahasiswa(float nilaicek);

string matkulcek,indekscek;
float nilaicek;




int main()
{

    int pilihan;
    string matkul,indeks;
    float nilai;
    ofstream filekrs,filekuliah;

    filekrs.open("KRS.txt");
    filekrs.close();

    filekuliah.open("KULIAH.txt");
    filekuliah.close();

    cout<<  "1. Input data KRS\n"
            "2. Input data Nilai\n"
            "3. Hapus data\n"
            "4. Menampilkan nilai akhir mahasiswa\n"
            "5. Menampilkan jumlah mahasiswa yang mendapat indeks tertentu\n"
            "6. Mengecek apakah ada mahasiswa yang mendapat indeks dibawah nilai tertentu\n"
            "Masukkan Pilihan Anda (1/2/3/4/5/6) / 0 untuk akhiri program = \n";
        cin>>pilihan;
    while(pilihan != 0)
    {
        if ( pilihan == 1)
            {
                krs();
            }
        if ( pilihan == 2)
            {
                kuliah();
            }
        if ( pilihan == 3 )
            {
                hapus();
            }
        if ( pilihan == 4)
            {
                bacafile();
            }
        if ( pilihan == 5)
            {
                cout<<"Masukkan Matkul yang mau dicek : ";cin>>matkul;
                cout<<"Masukkan Indeks yang akan dicek : ";cin>>indeks;
                infomahasiswa(matkul,indeks);
            }
        if ( pilihan == 6)
            {
                cout<<"Masukkan Nilai yang menjadi batas atas : ";cin>>nilai;
                infomahasiswa(nilai);
            }

            cout<<  "1. Input data KRS\n"
            "2. Input data Nilai\n"
            "3. Hapus data\n"
            "4. Menampilkan nilai akhir mahasiswa\n"
            "5. Menampilkan jumlah mahasiswa yang mendapat indeks tertentu\n"
            "6. Mengecek apakah ada mahasiswa yang mendapat indeks dibawah nilai tertentu\n"
            "Masukkan Pilihan Anda (1/2/3/4/5/6) / 0 untuk akhiri program = \n";
        cin>>pilihan;
    }



    return 0;
}
void krs()
{
    int n=0;
    string nimkrs[100],matkulkrs[100];
    int semkrs[100],sks[100];
    cout<<"Masukkan NIM Mahasiswa = "; cin>>nimkrs[n];
    cout<<"Masukkan semester yang ditempuh = "; cin>>semkrs[n];
    cin.ignore();
    cout<<"Masukkan Mata kuliah yang diambil = "; getline(cin, matkulkrs[n]);
    cout<<"Masukkan total sks yang diambil = "; cin>>sks[n];

    ofstream inputkrs;
    inputkrs.open("KRS.txt", ios ::app);
    inputkrs<<nimkrs[n]<<"\t"<<semkrs[n]<<"\t"<<matkulkrs[n]<<"\t"<<sks[n]<<"\n";
    inputkrs.close();
    n=n++;
}
void kuliah()
{
    int n=0;
    string matkulkuliah[100],nimkuliah[100],skalanilai[100];
    int semkuliah[100];
    cout<<"Masukkan NIM Mahasiswa = ";cin>>nimkuliah[n];
    cout<<"Masukkan semester yang ditempuh = ";cin>>semkuliah[n];
    cin.ignore();
    cout<<"Masukkan nama kelas = ";getline(cin, matkulkuliah[n]);
    cout<<"Nilai dalam skala huruf = ";cin>>skalanilai[n];

    ofstream inputkuliah;
    inputkuliah.open("KULIAH.txt", ios ::app);
    inputkuliah<<nimkuliah[n]<<"\t"<<semkuliah[n]<<"\t"<<matkulkuliah[n]<<"\t"<<skalanilai[n]<<"\n";
    inputkuliah.close();
    n=n++;
}



void bacafile()
{

    int i=0, n=0,jumsks = 0,sks,a,totalsks=0;
    float nilai,ip,jumnilmatkul, nilaimatkul[100];
    string nilaihuruf[100],checknim,checksem;
    ifstream baca, bacakrs;
    ofstream ipfile;
    char test[100], krs[100];

    cout<<"Masukkan NIM yang ingin ditampilkan = ";cin>>checknim;
    cout<<"Masukkan Semester yang dicari = ";cin>>checksem;
    baca.open("KULIAH.txt");
    while (!baca.eof())
    {
        baca.getline(test,100, '\t');
        if (test == checknim)
        {
            baca.getline(test,100, '\t');
            if (test == checksem)
            {
                baca.getline(test,100, '\t');
                cout<<test<<" berapa sks = ";cin>>sks;
                baca.getline(test,100, '\n');
                nilai=peubahnilai(test);
                nilaimatkul[i]=nilai*sks;
                totalsks=totalsks+sks;
                i++;
            }
            else {baca.ignore (100, '\n');}
        }else{baca.ignore (100,'\n');}
    }
    baca.close();

    for (a=0;a<i;a++)
    {
        jumnilmatkul=nilaimatkul[a]+jumnilmatkul;
    }
    ip=jumnilmatkul/totalsks;
    cout<<"IP mahasiswa ini = "<<ip;

    ipfile.open("IP.txt",ios ::app);
    ipfile<<checknim<<"\t"<<ip<<"\n";



}

float peubahnilai (string test)
{
    float nilai;
    if (test == "A"){nilai = 4.00;}
    if (test == "A-"){nilai = 3.70;}
    if (test == "B+"){nilai = 3.30;}
    if (test == "B"){nilai = 3.00;}
    if (test == "B-"){nilai = 2.70;}
    if (test == "C+"){nilai = 2.30;}
    if (test == "C"){nilai = 2.00;}
    if (test == "D"){nilai = 1.00;}
    if (test == "E"){nilai = 0.00;}
    return nilai;
}
void hapus()
{
    fstream hapusdata;
    char data[100];
    string nim[100],sem[100],matkul[100],sks[100],nimhilang;
    int n=0,a=0;
    cout<<"NIM berapa yang akan dihapus = ";cin>>nimhilang;

    hapusdata.open("KRS.txt", ios :: in);
    while (!hapusdata.eof())
    {
        hapusdata.getline(data,100,'\t');
        nim[n]=data;
        hapusdata.getline(data,100,'\t');
        sem[n]=data;
        hapusdata.getline(data,100,'\t');
        matkul[n]=data;
        hapusdata.getline(data,100);
        sks[n]=data;
    }
    hapusdata.close();

    hapusdata.open("KRS.txt", ios :: out);
    for (a=0;a=n;a++)
    {
        if(nim[a]==nimhilang)
        {
            nim[a]='\t';
            sem[a]='\t';
            matkul[a]='\t';
            sks[a]='\n';
        }
    }
}

void infomahasiswa(string matkulcek, string indekscek)
{
    ifstream data;
    char cek[100];
    int n=0;
    data.open("KULIAH.txt");
    while(!data.eof())
    {
        data.ignore(10,'\t');
        data.ignore(2,'\t');
        data.getline(cek,20,'\t');
            if (cek==matkulcek)
            {
                data.getline(cek,20,'\n');
                if(cek==indekscek)
                    n++;
                }
            else
            {
                data.ignore(100,'\n');
            }
    }
    data.close();
    cout<<"Jumlah Mahasiswa mendapat nilai "<<indekscek<<" pada mata kuliah "<<matkulcek<<" adalah : "<<n<<" Orang\n";

}

void infomahasiswa(float nilaicek)
{
    ifstream data;
    char score[100];
    int jumlah=0;
    data.open("IP.txt");
    while(!data.eof())
    {
        data.ignore(10,'\t');
        data.getline(score,10,'\n');
        if (atof(score)<nilaicek)
        {
            jumlah++;
        }
    }
    data.close();
    cout<<"Mahasiswa yang dibawah nilai "<<nilaicek<<" : "<<jumlah;
}



