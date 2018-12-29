#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	int a[n];
	int b[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	int sum =0;
	sort(a,a+n);
	sort(b,b+n);
	for (int i = 0; i < n; ++i)
	{
		sum += a[i]*b[n-i-1];
	}
	cout<<sum;

	return 0;
}