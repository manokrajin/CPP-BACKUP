#include <iostream>

using namespace std;

int main()
{
    string text;
    cout<<"masukkan kata = "; cin>>text;
    cout<<text;

        while(text != "exit")
        {
        cout<<endl;
        cout<<"masukkan kata = ";
        cin>>text;
        cout<<text;
        }



    return 0;
}
