#include <iostream>
#include <vector>
using namespace std;
double fac(int n){
	if (n==0||n==1)
	{
		return 1;
	}
	double num=1;
	for (int i = 1; i <= n; ++i)
	{
		num = num*i;
	}
	return num;
}
int main(int argc, char const *argv[])
{
	//vector<vector<int>> v={0,};
	int cnt =0;
	double get;
	cin>>get;
	for (int i = 2; i <= get; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			double com = fac(i)/(fac(j)*fac(i-j));
			
			if (com ==get)
			{
				//cout<<i<<" "<<j<<"\n";
				cnt++;

			}
		}
	}
	//cout<<fac(14);
	cout<<cnt<<"\n";
	for (int i = 2; i <= get; ++i)
	{
		for (int j = 1; j < i; ++j)
		{
			double com = fac(i)/(fac(j)*fac(i-j));
			
			if (com ==get)
			{
				cout<<i<<" "<<j<<"\n";
				

			}
		}
	}
	return 0;
}