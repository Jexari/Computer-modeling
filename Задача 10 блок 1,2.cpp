#include <iostream>
#include <cmath>
using namespace std;
double f(int k);
int main(){
	float h;
	int k;
	cout<<"Enter the border: ";
	cin>>k;
	h=f(k);
	cout<<"Result: "<<h;
	return 0;
}
double f(int k){
	float h;
	int i;
	h=1;
	const float pi=3.1415926535;
	for (i=1; i<(k+1);i++){
		h=h*cos(pi/pow(2, i+1));
	}
	return h;
}