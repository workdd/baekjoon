#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int count;
	cin>>count;
	int p[count+1] ={0,};
	int d[count+1] ={0,};
	for (int i = 1; i <= count; ++i)
	{
		cin>>p[i];

	}
	for (int i = 1; i <= count; ++i)
	{
		d[i] =0;
		for (int j = 1; j <= i; ++j)
		{
			d[i] =max(d[i],d[i-j]+p[j]);
		}
	}
	cout<<d[count];
	return 0;
}