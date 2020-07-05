#include <iostream>

using namespace std;

int main()
{
    int index;
    int nilai[10];

    for(int i=0; i<10; i++)
    {
        cin >> nilai[i];
    }
    int minimum = nilai [0];

    for(int i=1; i<10; i++)
    {
        if(nilai[i] < minimum)
        {
            minimum = nilai [i];
            index = i;
        }
    }
    cout << minimum <<endl << index;
    return 0;
}
