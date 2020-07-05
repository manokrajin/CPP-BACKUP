#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
    double matriks[2][3], matriksbaru[2][3],nilaix,nilaiy,j,k;
    float pembagi;
    int x,y;
    cout<<"input nilai";
    for (x=0;x<2;x++)
    {
        for (y=0;y<3;y++)
        {
            cin>>matriks[x][y];
        }
    }

    cout<<"matriks awal = \n";
     for (x=0;x<2;x++)
    {
        for (y=0;y<3;y++)
        {
            cout<<matriks[x][y]<<"\t";
        }
        cout<<"\n";
    }

    pembagi=matriks[1][0]/matriks[0][0];
    cout<<"j = "<<j<<endl;
    cout<<"k = "<<k<<endl;
    matriksbaru[1][1]=matriks[1][1]-(pembagi*matriks[0][1]);
    matriksbaru[1][2]=matriks[1][2]-(pembagi*matriks[0][2]);
    cout<<"pembagi = "<<pembagi;
    matriksbaru[1][0]=0;
        for(y=0;y<3;y++)
        {
         matriksbaru[0][y]=matriks[0][y];
        }
    cout<<"Matriks setelah gauss = \n";

    for (y=0;y<1;y++){
        {
            matriksbaru[1][y]=matriks[1][y];
        }
    }
    for (x=0;x<2;x++)
    {
        for (y=0;y<3;y++)
        {
            cout<<matriksbaru[x][y]<<"\t";
        }
        cout<<"\n";
    }

    nilaiy=matriksbaru[1][2]/matriksbaru[1][1];
    nilaix=(matriksbaru[0][2]-(matriksbaru[0][1]*nilaiy))/matriksbaru[0][0];
    cout<<"nilai x = "<<nilaix<<endl;
    cout<<"nilai y = "<<nilaiy<<endl;



        return 0;




}
