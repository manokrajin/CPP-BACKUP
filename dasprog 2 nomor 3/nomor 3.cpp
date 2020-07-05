#include <iostream>
using namespace std;
float volume(float radius, int i){
	float sphere=3.14*4/3*radius*radius*radius;

	return sphere;
}
float volume(float length, float height, float width){
	float cuboid=length*height*width;

	return cuboid;
}
float volume(float side, int x, int y, int z){
	float cube=side*side*side;

	return cube;
}
float volume(float radius){
	float cylinder=3.14*radius*radius;

	return cylinder;
}



int main(){
    cout <<"Volume Bola r=6    = "<<volume(6,7)<<"\n";
	cout <<"Volume Kuboid 3*4*5  = "<<volume(3*1.0,4*1.0,5*1.0)<<"\n";
	cout <<"Volume Silinder r=4  = "<<volume(4)<<"\n";
	cout <<"Volume Cube side=4.5 = "<<volume(4.5,4,4,4)<<"\n";


	return 0;
}
