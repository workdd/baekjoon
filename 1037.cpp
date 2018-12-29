#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	long long sum=1;
	int box[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>box[i];
	}
	sort(box,box+n);
	sum = box[0]*box[n-1];
	cout<<sum;
	return 0;
}