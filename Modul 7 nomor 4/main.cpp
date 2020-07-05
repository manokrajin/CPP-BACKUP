#include <iostream>

using namespace std;

int main()
{
    string a="telur",b="beras",c="mentega",bar;
    int x=0,y=0,z=0,item[3];
    item[0]=0;
    item[1]=0;
    item[2]=0;
    do
    {
        cout<<"masukkan item yang diinginkan = ";cin>>bar;
        if (bar == a)
        {
          item[0]=x++;
        }
        if (bar==b)
        {
            item[1]=y++;
        }
        if (bar==c)
        {
            item[2]=z++;
        }
    }while(bar!="end");

    cout<<"telur = "<<item[0]<<endl;
    cout<<"beras = "<<item[1]<<endl;
    cout<<"mentega = "<<item[2];
    return 0;
}
