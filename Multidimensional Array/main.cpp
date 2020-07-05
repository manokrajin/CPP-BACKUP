#include <iostream>
using namespace std;

void multiarray( int *ptrArray, int baris, int kolom){
	int indeks=0;
	for (int i=0 ; i <baris; i++){
		cout<<"[ ";
		for(int j=0 ; j<kolom ; j++){
			cout<<*(ptrArray+indeks)<<" ";
			indeks++;
		}
		cout<<"]"<<endl;
	}
}

int main ()
{

	const int baris = 2 ;
	const int kolom = 5 ;
	int array[baris][kolom]={0,1,0,5,2,1,9,0,0,1};

	multiarray(*array, baris, kolom);

	return 0;
}
