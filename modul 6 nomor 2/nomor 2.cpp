#include <iostream>

using namespace std;
int num;
string cek;
string iseven(int x);
int main()
{
    cin>>num;
    cout<<iseven(num);
    return 0;
}

string iseven(int x)
{
    if (x%2==0)
    {
        cek="true";
    }
    else
    {
        cek="false";
    }
    return cek;
}
