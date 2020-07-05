#include <iostream>

using namespace std;

int main()
{
    int a,b,c,n;
    cin>>n;
    for (a=1;a<=n;a=a+1)
    {
        for(b=a;b<=n;b=b+1)
        {
            cout<<" ";
        }
        for (c=1;c<=a;c=c+1)
        {
            cout<<("%i",a);
        }
    cout<<endl;
    }
    return 0;
}
