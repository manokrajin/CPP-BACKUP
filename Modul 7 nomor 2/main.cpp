#include <iostream>

using namespace std;

int main()
{
    string a = "kalkulus",b = "pemrogaman",c = "akuntansi bisnis" ,d = "siti nurbaya";
    string rak[4]= {a,b,c,d};
    string buku;
    int i=0;
    cout<<"mau buku apa = ";cin>>buku;
     while (buku != "done")
        {
            if (buku==a || buku ==b || buku==c || buku == d)
            {

                while (rak[i]!=buku)
                {
                    i++;
                }
                cout<<i+1<<endl;
            }
            else
            {
                cout<<"buku tidak ada dalam direktori kami"<<endl;
            }


        cout<<"mau buku apa = ";cin>>buku;
        }

    return 0;
}

