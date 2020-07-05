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
void sebaran_nilai();

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
            "7. Mengetahui Sebaran Nilai Mahasiswa\n"
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
        if ( pilihan == 7)
            {
                sebaran_nilai();
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
void krs() //input data krs
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
void kuliah() //input indeks nilai dalam skala huruf
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



void bacafile() //cetak ip
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
    ipfile<<checknim<<"\t"<<checksem<<"\t"<<ip<<"\n";



}

float peubahnilai (string test) //subprogram untuk mengubah huruf ke nilai
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


void sebaran_nilai()
{
    ifstream file;
    string matkul,ambil;
    string nim_ip[2][100];
    string prostudi[4]={"Komputer","Geologi","Kimia" , "Lingkungan"};
    int tampilan[4][7]={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};
    char prodi[4],data[100];
    float nilai;
    int total,baris,kolom,i=0;
    bool ketemu,tambah;


    cout<<"Masukkan Mata Kuliah : ";cin>>matkul;

    file.open("kuliah.txt");
    while(!file.eof()){
        file.getline(data,100,'\t');
        nim_ip[0][i]=data;
        file.ignore(100,'\t');
        file.getline(data,100,'\t');
        if(data==matkul){
            i++;
        }
        file.ignore(100,'\n');
    }
    file.close();

    for(int j=0;j<i;j++){

        file.open("ip.txt");
        ketemu=false;
        while(!file.eof()&&!ketemu){
            file.getline(data,100,'\t');
            if(data==nim_ip[0][j]){
                file.ignore(100,'\t');
                file.getline(data,100,'\n');
                nim_ip[1][j]=data;
                ketemu=true;
            }
                else{
                    file.ignore(100,'\n');
                }
        }
        file.close();

    }

    for(int j=0;j<i;j++){
        tambah=true;
        for(int k=0;k<4;k++){
            prodi[k]=nim_ip[0][j][k];
        }
        if(prodi[2]=='1'&&prodi[3]=='3'){
            baris=0;
        }
        else if(prodi[2]=='1'&&prodi[3]=='2'){
                baris=1;
        }
        else if(prodi[2]=='1'&&prodi[3]=='1'){
                baris=2;
        }
        else if(prodi[2]=='5'&&prodi[3]=='2'){
                baris=3;
        }
        else{tambah=false;}

        int emergency=0;
        while(nim_ip[0][j][emergency]!='\0'){
            data[emergency]=nim_ip[1][j][emergency];
            emergency++;
        }
        nilai=atof(data);
        if(nilai<1){
            kolom=0;
        }
        else if(nilai<1.49){
            kolom=1;
        }
        else if(nilai<1.99){
            kolom=2;
        }
        else if(nilai<2.49){
            kolom=3;
        }
        else if(nilai<2.99){
            kolom=4;
        }
        else if(nilai<3.49){
            kolom=5;
                            }
        else{
            kolom=6;
        }

        if(tambah){
            tampilan[baris][kolom]++;
        }
    }


    cout<<"\n\t\t<1.0      1-1.49 1.5-1.99 2-2.49 2.5-2.99 3-3.49   3.5-4 Total\n";     ///nomor 4
    for(int j=0;j<4;j++){
        total=0;
        cout<<prostudi[j]<<'\t';
        for(int k=0;k<7;k++){
            total+=tampilan[j][k];
            cout<<"  "<<tampilan[j][k]<<"\t   ";
        }
        cout<<total<<endl;
    }
    cout<<"Total\t\t";
    for(int j=0;j<7;j++){
        total=0;
        for(int k=0;k<4;k++){
            total+=tampilan[k][j];
        }
        cout<<"  "<<total<<"\t   ";
    }
}

