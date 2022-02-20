#include <iostream>
#include <cmath>
using namespace std;
double f(float G, float M, float R, double h, double g);
int main(){
	double h, g;
	const float G=6.672*pow(10, -11);
	const float M=5.96*pow(10, 24);
	const float R=6.37*pow(10, 6);
	cout<<"Enter the hight: "<<endl;
	cin>>h;
	g=f(G, M, R, h, g);
	cout<<"Outcome: "<<g;
	return 0;
}
double f(float G, float M, float R, double h, double g){
	g=G*(M/(pow(R+h, 2)));
	return g;
}