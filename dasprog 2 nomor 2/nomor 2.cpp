#include <iostream>

using namespace std;
int t,i,x,jam, mjam,menit, menit2,detik;
int *time=&t;
int waktuawal=24720;

int waktujogingpermil(int i){
	t=i*(8*60+15);

	return t;
}
int waktusprintpermil(){
	*time=3*(7*60+12);

	return t;
}


int main(){
	cout << waktujogingpermil(2)+waktusprintpermil()<<endl;
	x=waktujogingpermil(2)+waktusprintpermil()+waktuawal;
	cout << x << endl;
	jam=x/3600;
	mjam=x%3600;
	menit =mjam/60;
	menit2=menit%60;
	detik=menit2;
	cout << "jam "<< jam << " menit "<< menit << " detik " <<detik << endl;

	return 0;

}
