#include <iostream>

using namespace std;

int main()
{
    int n,app;
    cin>>n;
    while (n>=10)
    {
        app=1;
        while(n>0)
        {
            app=app*(n%10);
            cout<<"app = "<<app<<endl;
            n=n/10;
            cout<<"n = "<<n<<endl;
        }n=app;
    }
    cout<<n;
    return 0;
}
