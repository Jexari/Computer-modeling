#include <iostream>
using namespace std;
float f(float a11, float a12, float a13, float a21, float a22, float a23, float a31, float a32, float a33);
int main(){
	float a11, a12, a13, a21, a22, a23, a31, a32, a33, det;
	cout<<"Enter values a11, a12, a13:";
	cin>>a11>>a12>>a13;
	cout<<"Enter values a21, a22, a23:";
	cin>>a21>>a22>>a23;
	cout<<"Enter values a31, a32, a33:";
	cin>>a31>>a32>>a33;
	det=f(a11, a12, a13, a21, a22, a23, a31, a32, a33);
	cout<<det;
	return 0;
}

float f(float a11, float a12, float a13, float a21, float a22, float a23, float a31, float a32, float a33){
	float det;
	det=a11*(a22*a33-a23*a32)-a12*(a21*a33-a23*a31)+a13*(a21*a31-a31*a22);
	return det;
}