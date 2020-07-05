#include <Iostream>
using namespace std;


float discount(){
    float harga=(24.95*60)*0.6;
    return harga;
}
float shippingCost(){
    float harga=3+(59*0.75);
    return harga;
}
float wholesaleCost( int i){
	int harga=((i*60)*0.6)+(59*0.75)+3;
	return harga;
}
float wholesaleCost( float i){
	float harga=((i*60)*0.6)+(59*0.75)+3;
	return harga;
}

int main()
{

float harga_float=24.95;
int harga_int=24;

cout <<"Total Biaya int = "<< wholesaleCost(harga_int)<<endl;
cout <<"Biaya Pengiriman = "<< shippingCost()<<endl;
cout <<"Total Biaya = "<< wholesaleCost(harga_float)<<endl;
cout <<"Harga Diskon = "<< discount()<<endl;


}
