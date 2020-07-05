#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout<<"masukkan a dan b"<<endl;
    cin>>a;
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<a<<b;
    return 0;
}
