#include <iostream>
using namespace std;
int manok[10] = {1, 26, 29, 42, 49, 50, 53, 60, 65, 88};
int cari=60;
int binary_search_test(int array_awal,int array_akhir)
{

    int mid=(array_awal+array_akhir)/2;
    if (array_awal<=array_akhir)
    {
        if (manok[mid] == cari)
        {
            return mid;
        }
        if (manok[mid] > cari)
        {
            return binary_search_test(array_awal, mid-1);
        }
        if (manok[mid] < cari)
        {
            return binary_search_test(mid+1, array_akhir);
        }
    }
    return -1;
}
int main()
{
    int cek,sizearray=10;
    cout<<" ========Binary search========\n";
    int ada=binary_search_test(0, sizearray-1);
    if (ada >= 0)
    {
        cout<< " array berisi 60 terletak pada indeks ke "<<ada;
    }
    if (ada < 0)
    {
        cout<<" tidak ada arra berisi nilai tersebut ";
    }

    return 0;
}
