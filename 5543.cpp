#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	int acom,bcom;
	for (int i = 0; i < 3; ++i)
	{
		cin>>a;
		if (i==0)
		{
			acom =a;
		}
		else if (acom>a)
		{
			acom =a;
		}
	}
	for (int i = 0; i < 2; ++i)
	{
		cin>>b;
		if (i==0)
		{
			bcom =b;
		}
		else if (bcom>b)
		{
			bcom =b;
		}
	}
	cout<<bcom+acom-50;
	return 0;
}