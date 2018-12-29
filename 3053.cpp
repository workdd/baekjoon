#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
	int r;
	cin>>r;

	double t = r*r*2;
	double u = M_PI*r*r;
	cout<<fixed;
	cout.precision(6);
	cout<<u<<"\n";
	cout.precision(6);
	cout<<t;
	
	return 0;
}