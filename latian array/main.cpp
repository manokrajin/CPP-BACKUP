#include <iostream>

using namespace std;

int main()
{

  char x[10];
  int n,i;
  for (i=1;i<=10;i++)
  {
      cin>>x[i];
  }
  n=0;
  for (i=1;i<=10;i++)
  {
      if (x[i]=='A')
      {
         n=n+1;
      }
      else
      {
         break;
      }
  }
  cout<<n;

    return 0;
}
