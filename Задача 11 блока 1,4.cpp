#include <iostream>
using namespace std;
float f(float a11, float a12, float a21, float a22);
int main(){
	float a11, a12, a22, a21, det;
	cout<<"Enter values a11, a12: ";
	cin>>a11>>a12;
	cout<<"Enter values a21, a22: ";
	cin>>a21>>a22;
	det=f(a11, a12, a21, a22);
	cout<<det;
	return 0;
}
float f(float a11, float a12, float a21, float a22){
	float det;
	det=a11*a22-a12*a21;
	return det;
}